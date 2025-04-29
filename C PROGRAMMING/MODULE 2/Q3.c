/* Q-3). Write a C program that includes variables, constants, and comments. Declare 
and use different data types (int, char, float) and display their values.
*/
#include<stdio.h>
#define ch 'f'
int main()
{
	//declaration of variables with data types
	const int a = 20; //---declaration of variable 'int' data type with constant value of a
	char d = 'a'; //---declaration of variable 'char' data type with value of b
	float c = 2.3520;//---declaration of variable 'float' data type with value of c
	
	printf("\nThe value of a = %d",a);//display integer value
	printf("\nthe value of b = %d",a);//display constant value
	printf("\nthe value of c = %.2f",c);//display float value 
	printf("\nthe value of d = %c",d);//display character value
	printf("\nthe value of e = %c",ch);//display constant chr value using define 
	
	return 0;
}
