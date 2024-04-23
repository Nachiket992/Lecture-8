#include<stdio.h>

int main() {
	
	int num1, num2, num3;
	
	printf("Find the minimum number from the given 3 number.\n\n");
	printf("Enter a value of the first number :- ");
	scanf("%d", &num1);
	printf("\nEnter a value of the second number :- ");
	scanf("%d", &num2);
	printf("\nEnter a value of the third number :- ");
	scanf("%d", &num3);
	(num1 < num2 && num1 < num3) ? printf("\nThe minimum value is %d.\n\n", num1) :
	(num2 < num1 && num2 < num3) ? printf("\nThe minimum value is %d.\n\n", num2) :
	printf("\nThe minimum value is %d.\n\n", num3);
	printf("Thank you.");
	
}