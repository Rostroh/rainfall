#include <stdlib.h>
#include <stdio.h>
#include <time.h>

char		c[68];

void		m(void)
{
	printf("%s - %d\n", c, time(0));
}

int			main(int argc, char **argv)
{
	int	 	*p1;
	int		*p2;

	p1 = malloc(sizeof(8));
	*p1 = 1;
	*(p1 + 4) = malloc(sizeof(8));
	p2 = malloc(sizeof(8));
	*p2 = 2;
	*(p2 + 4) = malloc(sizeof(8));
	strcpy(*(p1 + 4), argv[1]);
	strcpy(*(p2 + 4), argv[2]);
	fgets(c, 0x44, fopen("/home/user/level8/.pass", "r"));
	puts("~~");
	return (0);
}
