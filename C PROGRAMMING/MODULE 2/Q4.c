/*Q-4). Write a C program that accepts two integers from the user and performs 
arithmetic, relational, and logical operations on them. Display the results.
*/
#include<stdio.h>
int main ()
{
	int a, b;
	printf("Enter number 1(a) : ");
	scanf("%d",&a);
	printf("Enter number 2(b) : ");
	scanf("%d",&b);
	printf("\n");
	
	printf("============arithmetic oprations============");
	printf("\n");
	printf("\nthe division of %d and %d is       (a/b) = %.2f",a,b,(float)a/(float)b);
	printf("\nthe multiplication of %d and %d is (a*b) = %d",a,b,a*b);
	printf("\nthe adition of %d and %d is        (a+b) = %d",a,b,a+b);
	printf("\nthe substraction of %d and %d is   (a-b) = %d",a,b,a-b);
	printf("\n");
	printf("\n");
	printf("\n");
	
	
	printf("============relational oprations============");
	printf("\n");
	printf("\n1 means true and 0 means false");
	printf("\na and b is equal     (a==b)= %d",a==b);
	printf("\na and b is not equal (a!=b)= %d",a!=b);
	printf("\na is biggest number  (a>b) = %d",a>b);
	printf("\nb is biggest number  (a<b) = %d",a<b);
	printf("\na is less or equal to b    (a<=b) = %d",a<=b);
	printf("\na is greater or equal to b (a>=b) = %d",a>=b);
	printf("\n");
	printf("\n");
	printf("\n");

	
	printf("============logical oprations============");
	printf("\n");
	printf("\na<b && a>b   = %d",a<b&&a>b);
	printf("\na<=b || a>=b = %d",a<=b || a>=b);
	printf("\n!(a==b)      = %d",!(a==b));
	printf("\n");
	printf("\n");
	printf("\n");
	
	return 0;
}
