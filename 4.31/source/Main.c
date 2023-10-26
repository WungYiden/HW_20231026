#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (i == 0)
			{
				if(j != 4)
					printf(" ");
				else
					printf("*");
			}
			if (i == 1)
			{
				if (j < 3 || j > 5)
					printf(" ");
				else
					printf("*");
			}
			if (i == 2)
			{
				if (j < 2 || j > 6)
					printf(" ");
				else
					printf("*");
			}
			if (i == 3)
			{
				if (j < 1 || j > 7)
					printf(" ");
				else
					printf("*");
			}
			if (i == 4)
			{
				printf("*");
			}
			if (i == 5)
			{
				if (j < 1 || j > 7)
					printf(" ");
				else
					printf("*");
			}
			if (i == 6)
			{
				if (j < 2 || j > 6)
					printf(" ");
				else
					printf("*");
			}
			if (i == 7)
			{
				if (j < 3 || j > 5)
					printf(" ");
				else
					printf("*");
			}
			if (i == 8)
			{
				if (j != 4)
					printf(" ");
				else
					printf("*");
			}
			/*if (i == 1 && j>3 && j<7)
				printf(" ");
			else
				printf("*");
			if (i == 2 && j > 2 && j < 8)
				printf(" ");
			else
				printf("*");
			if (i == 3 && j > 1 && j < 9)
				printf(" ");
			else
				printf("*");
			if (i == 5 && j > 1 && j < 9)
				printf(" ");
			else
				printf("*");
			if (i == 6 && j > 2 && j < 8)
				printf(" ");
			else
				printf("*");
			if (i == 7 && j > 3 && j < 7)
				printf(" ");
			else
				printf("*");
			if (i == 8 && j != 5)
				printf(" ");
			else
				printf("*");*/
		}
		printf("\n");
	}
	system("pause");
}
