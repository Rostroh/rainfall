#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void		p()
{
	int		addr;
	char	buf[64];

	fflush(stdout);
	gets(buf);
	addr = __builtin_extract_return_addr (__builtin_return_address (0));
	if ((addr & 0xb0000000) == 0xb0000000)
	{
		printf("(%p)\n", addr);
		exit(1);
	}
	puts(buf);
	strdup(buf);
}

int			main(void)
{
	p();
}
