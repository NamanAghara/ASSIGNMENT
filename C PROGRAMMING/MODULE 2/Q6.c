/*Q-6). Write a C program to print numbers from 1 to 10 using all three types of loops (while, for, do-while).
*/
#include<stdio.h>
int main ()
{
	int i;
	printf("numbers using for loop : ");
	
		for(i=1;i<=10;i++)
	{
	printf("%d",i);
    } 
	
	printf("\n");
	printf("\n");
	
	printf("numbers using while loop : ");
	i=1;
	while(i<=10)
	{
		printf("%d",i);
		i++;
	}
	printf("\n");
	printf("\n");
	
	printf("numbers using do-while loop : ");
	i=1;
	do
	{
		printf("%d",i);
		i++;
	}while(i<=10);
	
	
	return 0;
}
