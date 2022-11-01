#include <stdio.h>
#include <stdlib.h>

int		m = 0;

void	p(char *buf)
{
	printf(buf);
}

void	n(void)
{
	char	buf[512];

	fgets(buf, 512, stdin);
	p(buf);
	if (m == 0x1025544)
		system("/bin/cat /home/user/level5/.pass");
}

void	main(int argc, char **argv)
{
	n();
}
