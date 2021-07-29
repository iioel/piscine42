#ifndef READ_FILE_H
# define READ_FILE_H

int	parse_map_from_str(char *str, t_map *map);
int	parse_first_line(char **str, t_map *map);
int	ft_get_line_width(char *str, t_map *map);
int	parse_map_from_file(char *file_name, t_map *map);
int	get_fd(char *file_name);

#endif
