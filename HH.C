#include<stdio.h>
#include<conio.h>
void main()
{int a,b,i,j,r,s;
clrscr();
printf("Give 2 numbers to find armstrong numbers between them\n");
scanf("%d%d",&a,&b);
if(b<a)
printf("Invalid input");
else
{printf("Armstrong number between them : ");
for(j=a;j<=b;j++)

{s=0;
for(i=j;i!=0;i/=10)
{r=i%10;
s+=r*r*r;
}
if(s==j)
printf("%d\t",j);
}}
getch();
}