/*Q-10). Write a C program to demonstrate pointer usage. Use a pointer to modify the value of 
a variable and print the result.
*/ 
#include<stdio.h>
int main()
{
	int a = 10;
	int *ptr = &a;
	*ptr = 22;
	printf(" \nthe value is %d",a);
	return 0;
}
