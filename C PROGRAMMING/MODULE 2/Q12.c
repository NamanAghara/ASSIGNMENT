/*Q-12). Write a C program that defines a structure to store a student's details
(name,roll number,and marks).Use an array of structures to store details of 3 students and print them.
*/

#include<stdio.h>
struct student
{
char name [50];
int roll ;
int marks ;
};
int main ()
{
struct student s[3];
int i;
for(i=1;i<=3;i++)
{
printf("\n---------Enter information----------");
printf("\nEnter student name : ");
scanf("\n%s",&s[i].name);
printf("\nEnter roll         : ");
scanf("\n%d",&s[i].roll);
printf("\nEnter total marks  : ");
scanf("%d",&s[i].marks);
       
}
printf("\n---------Student details--------");
for(i=1;i<=3;i++)
{

printf("\nName of student   : %s",s[i].name);
printf("\nEnter roll        : %d",s[i].roll);
printf("\nEnter total marks : %d",s[i].marks);
printf("\n\n");
}
return 0;
}
