/*Q-8). Write a C program that calculates the factorial of a number using a function. 
Include function declaration, definition, and call. 
*/
#include<stdio.h>
int factorial (int n); //declaration
int main ()
{
	int n1;
	printf("Enter the number for find factorial : ");
	scanf("%d",&n1);
	
	printf("\nThe factorial is %d",factorial(n1)); //calling
	return 0;
}

int factorial (int n)//defination
{   int i;
	int fact = 1;
    for(i=1;i<=n;i++)
		{
			fact = fact*i;
		}
		return fact;
		
}



