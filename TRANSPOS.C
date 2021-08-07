#include<stdio.h>
#include<conio.h>
int main()
{
int arr[3][3],i,j;
clrscr();
printf("Enter matrix element :");
for( i=0;i<3;i++)
{for( j=0;j<3;j++){
scanf("%d",&arr[i][j]);
}
}printf("matrix before transpose:\n");
for( i=0;i<3;i++)
{for( j=0;j<3;j++){
printf("%d ",arr[i][j]);
}printf("\n");
}
printf("Matrix after transpose:\n ");
for( i=0;i<3;i++)
{for( j=0;j<3;j++){
printf("%d ",arr[j][i]);
}printf("\n");
}
getch();
return 0;
}
