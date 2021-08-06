#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{char name[20];
int roll;
int marks;
};
void main()
{struct student *s;
clrscr();
printf("Enter name of student:\t");
scanf("%s",&s->name);
printf("Enter roll number of student:");
scanf("%d",&s->roll);
printf("Enter marks of student: ");
scanf("%d",&s->marks);
printf("\n\n");
printf("Student details\n");
printf("Name of student: %s \n",s->name);
printf("Roll number of student:%d\n",s->roll);
printf("Marks of student:%d\n",s->marks);
getch();

}