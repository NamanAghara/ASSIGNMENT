/*Q-11). Write a C program that takes two strings from the user and concatenates them 
using strcat(). Display the concatenated string and its length using strlen().
*/ 
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[200],str2[200];
	printf("Enter string 1 : ");
	fgets(str1,sizeof(str1),stdin);
	printf("Enter string 2 : ");
	gets(str2);
	
	printf("\nthe value of string 1 is = %s",str1);
	printf("\nthe value of string 2 is = %s",str2);
	
	strcat(str1,str2);
//	int result= strlen(str1);
	
	printf("\nthe value of string 1 after use function is : %s",str1);
	printf("\nthe value of string 2 after use function is : %s",str2);
	printf("\n the lenght of string 1 is = %d",strlen(str1));
	printf("\n the lenght of string 2 is = %d",strlen(str2));
	return 0;
}
