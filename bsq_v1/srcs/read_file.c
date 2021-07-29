#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_strtools.h"
#include "def.h"
#include "read_file.h"

#define BUFFER_NBYTES_MAX 2048

int	parse_map_from_str(char *str, t_map *map)
{
	char	**tab;
	char	*line;
	int		n_line;
	int		n_char;

	if (parse_first_line(&str, map))
		return (1);
	n_line = 0;
	tab = malloc(map->height * sizeof(char *));
	while (n_line < map->height)
	{
		n_char = 0;
		line = malloc((map->width + 1) * sizeof(char));
		while (*str != '\n')
		{
			line[n_char++] = *(str++);
		}
		line[n_char] = 0;
		tab[n_line++] = line;
		str++;
	}
	map->v = tab;
	return (0);
}

int	parse_first_line(char **str, t_map *map)
{
	int	n;

	n = 0;
	while ((*str)[n] && (*str)[n] != '\n')
		n++;
	map->c_square = (*str)[--n];
	map->c_obstacle = (*str)[--n];
	map->c_free = (*str)[--n];
	(*str)[n] = 'x';
	map->height = ft_atoi(*str);
	*str = *str + n + 4;
	map->width = ft_get_line_width(*str, map);
	if ((map->c_square == map->c_obstacle)
		|| (map->c_square == map->c_free)
		|| (map->c_obstacle == map->c_free)
		|| map->height < 1 || map->width < 1)
		return (1);
	return (0);
}

int	ft_get_line_width(char *str, t_map *map)
{
	int	l;
	int	width;
	int	tmp_width;

	l = 0;
	width = 0;
	while (l < map->height)
	{
		tmp_width = 0;
		while (*str && *str != '\n')
		{
			if (! (*str == map->c_square || *str == map->c_obstacle
					|| *str == map->c_free))
				return (0);
			tmp_width++;
			str++;
		}
		if (width == 0)
			width = tmp_width;
		if (tmp_width != width)
			return (0);
		str++;
		l++;
	}
	return (width);
}

int	parse_map_from_file(char *file_name, t_map *map)
{
	int		fd;
	int		n_bytes;
	char	buffer[BUFFER_NBYTES_MAX];
	char	*file_text;
	char	*tmp_file_text;

	fd = get_fd(file_name);
	file_text = malloc(1);
	file_text[0] = '\0';
	n_bytes = read(fd, &buffer, BUFFER_NBYTES_MAX - 1);
	while (n_bytes != 0)
	{
		buffer[n_bytes] = '\0';
		tmp_file_text = file_text;
		file_text = ft_strjoin(tmp_file_text, buffer, "");
		free(tmp_file_text);
		n_bytes = read(fd, &buffer, BUFFER_NBYTES_MAX - 1);
	}
	if (fd != 0)
		close(fd);
	fd = parse_map_from_str(file_text, map);
	free(file_text);
	return (fd);
}

int	get_fd(char *file_name)
{
	int	fd;

	if (file_name != NULL)
	{
		fd = open(file_name, O_RDONLY);
		if (fd == -1)
			return (1);
	}
	else
		fd = 0;
	return (fd);
}
