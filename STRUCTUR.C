#include<stdio.h>
#include<conio.h>
struct student{
char name[20];
int class,
int height;
char gender;
float weight;
}s1;
int main(){
clrscr();
s1.student={"Vishal Dubey",167,12,'m',60};
printf("Student Data\n");
printf("Name %s\nclass %d\nheight %dcm\n gender %c\n %.1f",s1.name,s1.class,s1.height,s1.float)
getch();
return 0;

}