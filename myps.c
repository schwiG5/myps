#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char n = atoi(argv[1]);
	char x = '-o';

	if (strcmp(n,x)==0)
	{
		for (int i = 0; i < argc-2; ++i)
		{
			printf("%s\n",argv[i]);
		}
	}
	return 0;
}