#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void		n()
{
	system("/bin/cat /home/user/level7/.pass");
}

void		m()
{
	puts("Nope");
}

int			main(int argc, char **argv)
{
	void	(*p1)();
	char	*p2;
	
	p2 = malloc(64);
	p1 = malloc(4);
	p1 = &m;

	strcpy(p2, argv[1]);
	(*p1)();
}
