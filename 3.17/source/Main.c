#include <stdio.h>
#include <stdlib.h>
int main()
	{
		int account=0;
		float balance,charges,credits,limit;
		while (1)
		{
			printf("Enter accouut number (-1 to end):");
			scanf("%d", &account);
			if (account == -1)
				break;
			printf("Enter beginning balance:");
			scanf("%f", &balance);
			printf("Enter total charges:");
			scanf("%f", &charges);
			printf("Enter total credits:");
			scanf("%f", &credits);
			printf("Enter credit limit:");
			scanf("%f", &limit);
			if (balance + charges + credits > limit)
			{
				printf("Acccount : \t%d\n", account);
				printf("Credit limit:\t%.2f\n", limit);
				printf("Balance:\t%.2f\n", balance);
				printf("Credit Limit Exceeded.\n");
			}
			printf("\n");
		}
		system("pause");
		return 0;
	}