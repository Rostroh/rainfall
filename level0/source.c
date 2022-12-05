#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int			main(int argc, char **argv)
{
	char	*ret;
	char	*pouet;
	uid_t	u;
	gid_t	g;

	if (atoi(argv[1]) == 423)
	{
		ret = strdup("/bin/sh");
		pouet = NULL;
		g = getegid();
		u = geteuid();
		setresgid(g, g, g);
		setresuid(u, u, u);
		execv("/bin/sh", &ret);
	}
	else
		fwrite("No !\n", 1, 5, stderr);
	return (0);
}
