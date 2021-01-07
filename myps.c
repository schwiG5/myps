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
/*

int main(int argc, char *argv[])
{
	int count;
	char comparaison[]="-o";
	char *token, *r;
	r = argv[2];
	//assert(argv[2] !=NULL); la machine n'arrive pas a prendre en compte
	//char n = atoi(argv[1]);
	if(argc>=2){
		if (strcmp(comparaison,argv[1])==0)
		{
			//for (count = 2; count < argc; count++)
			//{
				
				while((token = strsep(argv[2],",")) != NULL)
				{				
				printf("%s     ", toupper(token));
				}			
			//}
			
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




//  FINALE VERSION


#include <ctype.h>
#include <stdio.h>
#include <string.h>

/*
exemple internet dont je me suis inspiré

int main()
{
    char *string,*found;

    string = strdup("Hello, yeah there, peasants yeah yeah!");
    printf("Original string: '%s'\n",string);

    while( (found = strsep(&string,",")) != NULL )
        printf("%s    ",found);
    	printf("\n");

    return(0);
*/

int main(int argc, char  *argv[])
{
	char *found;
	char *cover;
	char *end;
	int i;
	//argv = strdup(argv[2]);
	//char n = atoi(found);
	char comp[]= "-o";
	if (strcmp(comp,argv[1])==0)
	{
		/* code */
		while((found=strsep(&argv[2],","))!=NULL)
			//while(*cover++= toupper(*found++))
			for (int i = 0; i != '\0'; ++i)
			{
				found = toupper(found[i]);
				/* code */
			}
			printf("%s    ",found);
		printf("\n");
	}
	return 0;
}