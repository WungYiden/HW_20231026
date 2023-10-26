#include <stdio.h>
#include <stdlib.h>

int main()
{
	float principal,rate;
	int days;
	while (1)
	{
		printf("Emter loan principal (-1 to end):");
		scanf("%f", &principal);
		if (principal == -1)
			break;
		printf("Emter interest rate:");
		scanf("%f", &rate);
		printf("Enter term of the loan in days:");
		scanf("%d", &days);	
		printf("The interest charge is $%.2f\n\n", principal*rate*days / 365);
	}
	system("pause");
}
