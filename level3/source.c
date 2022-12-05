#include <stdio.h>

int			m = 0;

void		v()
{
	char		buf[512];

	fgets(buf, 512, stdin);
	printf(buf);
	if (m == 0x40)
	{
		fwrite("Wait what?!\n", 1, 12, stdout);
		system("/bin/sh");
	}
}

int			main(void)
{
	v();
}
