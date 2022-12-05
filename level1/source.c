#include <stdio.h>

void		run(void)
{
	fwrite("Good... Wait what?\n", 1, 0x13, stdout);
	system("/bin/sh");
}

void		main(void)
{
	char	c[64];

	gets(c);
	return ;
}
