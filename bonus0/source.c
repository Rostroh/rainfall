#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdint.h>

void	p(char *s1, char *s2)
{
	char	b1[4096];

	puts(s2);
	read(0, b1, 4096);
	puts(b1);
	*strchr(b1, '\n') = '\0';
	strncpy(s1, b1, 20);
}

void	pp(char *buf)
{
	char	c1[20];
	char	c2[20];

	p(c2, " - ");
	p(c1, " - ");
	strcpy((char *)buf, c2);
	memcpy(buf + strlen(buf), " \0", 2);
	strcat((char *)buf, c1);
}

int		main(void)
{
	char	buf[42];

	pp(buf);
	puts(buf);
	return (0);
}
