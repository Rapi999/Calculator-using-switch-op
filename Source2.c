//calculator
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a, b, c;
	printf("Enter the first number: "); //user input 1
	scanf_s("%d", &a);
	printf("Enter the second number: "); // user input 2
	scanf_s("%d", &b);
	
	printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division, 5 for modulus, 6 for power, 7 for square root: ");
	scanf_s("%d", &c); //user input 3
	
	switch (c)
	{
	case 1:
		printf("The sum of %d and %d is %d", a, b, a + b);
		break;
	case 2:
		printf("The difference of %d and %d is %d", a, b, a - b);
		break;
	case 3:
		printf("The product of %d and %d is %d", a, b, a * b);
		break;
	case 4:
		printf("The quotient of %d and %d is %d", a, b, a / b);
		break;
	case 5:
		printf("The remainder of %d and %d is %d", a, b, a % b);
		break;
	case 6:
		printf("The power of %d and %d is %d", a, b, pow(a, b));
		break;
	case 7:
		printf("The square root of %d is %f", a, sqrt(a));
		break;
		
	}
		

	printf("Press SPACE to quit the program\n");
	

	return 0;
	
}