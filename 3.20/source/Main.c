#include <stdio.h>
#include <stdlib.h>

int main()
{
	float worker;
	int hours_worked;
	while (1)
	{
		printf("Emter # of hours worked (-1 to end):");
		scanf("%d", &hours_worked);
		if (hours_worked == -1)
			break;
		printf("Emter hourly rate of the worker ($00.00):");
		scanf("%f", &worker);
		if(hours_worked>40)
			printf("Salary is $%.2f\n\n",hours_worked*worker+(hours_worked-40)*(worker/2));
		else
			printf("Salary is $%.2f\n\n", hours_worked*worker);
	}
	system("pause");
}
