/*Q-5). Write a C program to check if a number is even or odd using an if-else statement.
 Extend the program using a switch statement to display the month name based on the user’s input 
 (1 for January, 2 for February, etc.).
*/
#include<stdio.h>
int main ()
{
	int number, month;
	char c;
	//part 1 even or odd number program
	up :
	printf("Enter the number : ");
	scanf("%d",&number);
	
	if(number%2==0)
	{
		printf("\n%d is Even number",number);
	}
	else
	{
		printf("\n%d is Odd number",number);
	}
	printf("\nPress 'Y' to continue or press 'N' for exit : ");
	scanf(" %c",&c);
	if(c=='y'|| c=='Y')
	{
		goto up;
	}
	// part 2 switch program
	printf("\n");
	printf("\n");
	printf("\n");
	printf("Find the month, 'Y' or 'N' --  ");
	scanf(" %c",&c);
	if(c=='y'|| c=='Y')
	{
		printf("Enter the number for month find (1 to 12) :  ");
		scanf("%d",&month);
		
		switch (month)
		{
			case 1 :
		 
			printf("this month is : January");
			break;
			
			case 2 : 
			
			printf("this month is : February");
			break;
			
			case 3 : 
			
			printf("this month is : March");
			break;
			
			case 4 :
			 
			printf("this month is : April");
			break;
			
			case 5 : 
			
			printf("this month is : May");
			break;
			
			case 6 : 
			printf("this month is : June");
			break;
			
			case 7 : 
			
			printf("this month is : July");
			break;
			
			case 8 : 
			 
			printf("this month is : August");
			break;
			
			case 9 : 
			
			printf("this month is : September");
			break;
			
			case 10 : 
			
			printf("this month is : October");
			break;
			
			case 11: 
			
			printf("this month is : November");
			break;
			
			case 12: 
			
			printf("this month is : December");
			break;
			
			default:
            printf("Invalid month number!");
			}

	}
	return 0;
}
