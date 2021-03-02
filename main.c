#include <stdio.h>

extern char **environ;

int
main(int argc, char **argv)
{
	for(char **env = environ ; *env ; ++env)
		printf("%s\n", *env);
	return 0 ;
}
