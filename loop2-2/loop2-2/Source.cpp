#include <stdio.h>

using namespace std;

void main()
{
	int i = 0;
	int k = 1;
	while (i < 4)
	{
		int j = 1;
		
		while (j <= k)
		{
			printf("*");
			j++;

		}

		printf("\n");
		i++;
		k+=2;
	}
	fgetc(stdin);
}