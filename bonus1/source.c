#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int			main(int argc, char **argv)
{
	char	buf[40];
	int		n;

	n = atoi(argv[1]);
	if (n > 9)
		return(1);
	memcpy(buf, argv[2], sizeof(int) * n);
	if (n == 0x574f4c46)
	{
		execl("/bin/sh", "", 0);
	}
	return (0);
}
