/*Q-9). Write a C program that stores 5 integers in a one-dimensional array and prints them. 
Extend this to handle a two-dimensional array (3x3 matrix) and calculate the sum of all elements.
*/
#include<stdio.h>
int main ()
{
	int numb [5] = {1,2,3,4,5},j=0,i=0,sum=0;
	printf("------print numbers------");
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("\n\t%d",numb[i]);
	}
	printf("\n\n\n");
	printf("\t\t-----------matrix(3x3)------------");
	printf("\n");
	int num [3][3]={{1,2,3},{4,5,6},{7,8,9}};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	{
		printf("\t\t%d",num[i][j]);
		sum = sum + num[i][j];
	}
	printf("\n");
    }
    
	printf("\nSum of all numbers in the matrix = %d", sum);
	
	return 0;
}
