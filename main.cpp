#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char all;
	for (all=65; all<=90; all++)
	{
		printf("%c ",all);
	}
	
	printf("\n");
	for (all=97; all<=122; all++)
	{
		printf("%c ",all);
	}
	printf("\n");
	system ("pause");
	return 0;
}

