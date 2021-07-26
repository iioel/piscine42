#include "ft_filetools.h"
#include "ft_list.h"
#include "ft_strtools.h"
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_getfile(char *file, char **str)
{
	int		i;
	int		f;
	int		read_count;
	char	*to_copy;
	char	buf[BUF_SIZE];

	i = 0;
	*str = malloc(1);
	f = open(file, O_RDONLY);
	if (f == -1)
		return (1);
	read_count = read(f, buf, BUF_SIZE);
	while (read_count)
	{
		to_copy = ft_strstrip(buf, read_count - 1);
		*str = ft_strjoin(*str, to_copy, "");
		read_count = read(f, buf, BUF_SIZE);
	}
	close(f);
	return (0);
}

char	*ft_getnbr(char **str)
{
	int		size;
	char	*out;

	ft_skip(str, " ");
	size = ft_strlen_until(*str, " :");
	out = malloc((size + 1) * sizeof(char));
	if (out == NULL)
		return (NULL);
	ft_strncpy(out, *str, size);
	if (! ft_is_numeric(out))
	{
		free(out);
		return ("");
	}
	*str = *str + size;
	return (out);
}

char	*ft_getstr(char *str)
{
	int		size;
	char	*out;

	ft_skip(&str, " :");
	size = ft_strlen_until(str, "\n");
	out = malloc((size + 1) * sizeof(char));
	if (out == NULL)
		return (NULL);
	ft_strncpy(out, str, size);
	ft_strtrim(str);
	return (out);
}
