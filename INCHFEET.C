#include<stdio.h>
#include<conio.h>
struct distance{
int feet;
float inch;
}first,second,result;
int main()
{
clrscr();
printf("Enter first distance");
printf("enter feet ");
scanf("%d",&first.feet);
printf("Enter inch: ");
scanf("%f",&first.inch);

printf("Enter second distance: ");
printf("Enter feet: ");
scanf("%d",&second.feet);
printf("Enter inch:" );
scanf("%f",&second.inch);
result.feet= first.feet+ second.feet;
result.inch= first.inch +second.inch;
//convert inches to feet if greater than 12
while(result.inch>=12.0){
result.inch=result.inch-12.0;
++result.feet;
}
printf("\nsum of distance =%d\ '-%.1f\"",result.feet,result.inch);
getch();
return 0;
}
