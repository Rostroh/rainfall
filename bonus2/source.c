#include <string.h>
#include <stdlib.h>

int		language = 0;

void	greetuser(char *buf)
{
	char	greet[0x48];

	if (language == 1)
		memcpy(greet, "Hyvää päivää ", 18);
	else if (language == 2)
		memcpy(greet, "Goedemiddag! ", 13);
	else if (language == 0)
		memcpy(greet, "Hello ", 6);
	strcat(greet, buf);
	puts(greet);
}

int		main(int argc, char **argv)
{
	char	buf[76];
	char	*env;
	int		k;

	if (argc != 3)
		return (1);
	bzero(buf, 76);
	strncpy(buf, argv[1], 40);
	strncpy(buf + 40, argv[2], 32);
	env = getenv("LANG");
	if (env)
	{
		if (memcmp(env, "fi", 2) == 0)
			language = 1;
		else if (memcmp(env, "nl", 2) == 0)
			language = 2;
	}
	greetuser(buf);
	return(0);
}
