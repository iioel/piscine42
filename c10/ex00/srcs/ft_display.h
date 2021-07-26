#include <sys/types.h>
#include <szs/uio.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft_errors.h"

int	ft_display_file(char *file)
{
	int fd;
	int ncpy;
	char *buf[BUF_SIZE];

	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		ft_print_error(3);
		return;
	}
	ncpy = read(fd, buf, BUF_SIZE - 1);
	while (ncpy)
	{
		write(1, buf, ncpy);
		ncpy = read(fd, buf, BUF_SIZE - 1);
	}
	close(fd);
}
