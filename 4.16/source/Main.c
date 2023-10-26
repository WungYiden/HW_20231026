#include <stdio.h>
#include <stdlib.h>

int main()
	{
		int i, j;
		printf("(A)\n");
		for (i = 1; i < 11; i++)
		{
			for(j=0;j<i;j++)
			{
				printf("*");
			}
			printf("\n");
		}
		
		printf("\n(B)\n");
		for (i = 10; i > 0; i--)
		{
			for (j = 0;j<i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		printf("\n(C)\n");
		for (i = 10; i > 0; i--)
		{
			for (j = 10; j >0; j--)
			{
				if ((i-j)>=0)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
		printf("\n(D)\n");
		for (i = 10; i > 0; i--)
		{
			for (j = 0; j < 10; j++)
			{
				if ((j - i) >= -1)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
		system("pause");
	}