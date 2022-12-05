#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int			main(int argc, char **argv)
{
	char	buf[0x84];
	FILE	*ret;

	ret = fopen("/home/user/end/.pass", "r");
	bzero(buf, 0x84);
	if (ret == 0 || argc != 2)
		return (-1);
	fread(buf, 1, 66, ret);
	buf[65] = 0;
	buf[atoi(argv[1])] = 0;
	fread(buf + 0x42, 1, 0x41, ret);
	fclose(ret);
	if (strcmp(buf, argv[1]) != 0)
	{
		execl("/bin/sh", "sh", NULL);
		return (0);
	}
	puts(buf + 0x42);
	return (0);
}
