#include <stdio.h>
#include <stdlib.h>

int main()
{
	int height,width,i, j;
	printf("Enter is height:");
	scanf("%d", &height);
	printf("Enter is width:");
	scanf("%d", &width);
	for (i = 1; i <= height; i++)
	{
		for (j = 1; j <= width; j++)
		{
			if (i == 1 || i == height || j == 1 || j == width)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	system("pause");
}
