/*Q-7). Write a C program that uses the break statement to stop printing numbers when it reaches 5.
Modify the program to skip printing the number 3 using the continue statement. 
*/
#include<stdio.h>
int main()
{
	int i;
	printf("1). stop printing when number reach 5 :  ");
	for(i=1;i<=10;i++)
	{
		if(i==5)
		break;
		printf("%d",i);
	}
	printf("\n");
	printf("\n");
	
	printf("2). skip printing number 3 :  ");
	for(i=1;i<=10;i++)
	{
		if(i==3)
		continue;
		printf("%d",i);
	}
	printf("\n");
	return 0;
}
