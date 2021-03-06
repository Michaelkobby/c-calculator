#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char Operator;
	float num1, num2, result = 0;
	printf("Calculator using C Programming");
	printf("\n Please Enter an Operator (+, -, *, /)  :  ");
  	scanf("%c", &Operator);
  	
	printf("\n Please Enter the first number :  ");
  	scanf("%f", &num1);
  	printf("\n Please Enter the second number: ");
  	scanf("%f", &num2);
  	
  	switch(Operator)
  	{
  		case '+':
  			result = num1 + num2;
  			break;
  		case '-':
  			result = num1 - num2;
  			break;  			
  		case '*':
  			result = num1 * num2;
  			break;
  		case '/':
  			result = num1 / num2;
  			break;
		default:
			printf("\n You have entered an Invalid Operator ");				    			
	}
  
	printf("\n The result of %.2f %c %.2f  = %.2f", num1, Operator, num2, result);
	
	return 0;
}
