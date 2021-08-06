#include<stdio.h>
#include<conio.h>
int main()
{
int arr[5],i;
int *p;
clrscr();
printf("Enter Elements of an array:\n");
for(i=0;i<5;i++){
scanf("%d",&arr[i]);
}
p=&arr[0];
printf("Element of an array is: ");
for(i=0;i<5;i++){
printf("%d ",*(p+i));
}
getch();
return 0;
}
