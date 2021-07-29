#ifndef READ_FILE_H
# define READ_FILE_H

int	parse_first_line(char **str, t_parser *parser);
int	parse_map_from_file(char *file_name, t_parser *p);
int	get_fd(char *file_name);

#endif
