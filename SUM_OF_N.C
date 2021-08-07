#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int n,i,j=0;
int *ptr;
clrscr();
printf("Enter the number of elemner whose sum needs to be find ");
scanf("%d",&n);
ptr=(int*)malloc(n *sizeof(int));
if(ptr==NULL)
{printf("Memory not allocated:\n");
exit(0);
}
else
{ for(i=1;i<=n;i++) {
j+=i;
}
printf("Sum of first %d element is %d\n",n,j);
}
getch();
return 0;
}