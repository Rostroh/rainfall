#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char		*service;
char		*auth;

int			main(void)
{
	char	s1[0x80];

	while (1)
	{
		printf("%p, %p \n", service, auth);
		if (fgets(s1, 0x80, stdin) == NULL)
			break; 
		if (strncmp(s1, "auth ", 5) == 0)
		{
			auth = malloc(4);
			auth[0] = 0;
			if (strlen(s1 + 5) < 0x1e)
				strcpy(auth, s1 + 5);
		}
		if (strncmp(s1, "reset", 5) == 0)
			free(auth);
		if (strncmp(s1, "service", 6) == 0)
			service = strdup(s1 + 7);
		if (strncmp(s1, "login", 5) == 0)
		{
			if (*(auth + 32) != 0)
				system("/bin/sh");
			else
				fwrite("Password:\n", 1, 10, stdout);
		}
	}
	return (0);
}
