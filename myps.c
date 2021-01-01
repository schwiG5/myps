#include<stdio.h>
#include <stdlib.h>
#include <string.h>

/*int main(int argc, char *argv[])
{
	char n = atoi(argv[1]);
	int x = '-o';
	printf("%s\n", n); // indicateur
	printf("%s\n", x); //indicateur

	if (strcmp(n,x)==0)
	{
		
		int v = argc - 2;
		for (int i = 1; i < v; ++i)
		{
			printf("%s\n",argv[i]);
		}
	}
	return 0;
}
*/

/*int main(int argc, char *argv[])
{
	int count;
	char comparaison[]="-o";
	const char *separator = ",";
	char * strToken = strtok(argv, separator);
	//char n = atoi(argv[1]);
	if(argc>=2){
		if (strcmp(comparaison,argv[1])==0)
		{
			for (count = 2; count < argc; count++)
			{
				while(strToken != NULL)
				{
					printf("%s    ", argv[count]);
				}
				return 0;
			}
		printf("\n");
		}
		else{
			printf("erreur1\n");
			return 0;
		}
	}
	else{
		printf("erreur2\n");
		return 0;
	}
	return 0;
}
*/
int main(int argc, char *argv[])
{
	int count;
	char comparaison[]="-o";
	//char n = atoi(argv[1]);
	if(argc>=2){
		if (strcmp(comparaison,argv[1])==0)
		{
			for (count = 2; count < argc; count++)
			{
				if(strcmp(argv,separator)==0)
				{
					printf("	");
				}
				return 0;
				else{
					printf("%s", argv[count]);
				}
				return 0;
			}
		printf("\n");
		}
		else{
			printf("erreur1\n");
			return 0;
		}
	}
	else{
		printf("erreur2\n");
		return 0;
	}
	return 0;
}