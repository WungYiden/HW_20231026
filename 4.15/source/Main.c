#include<stdio.h>
#include<math.h>


int main() {
	int num;
	for (num= 0; num < 5; num++) {
		printf("The money after 15 years is %lf  (%lf)\n", 5000 * pow(1.1 + (0.005*num), 15), 1 + (0.005*num));
	}
}