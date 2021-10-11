#include <stdio.h>
#include<math.h>
int main()
{
    float s,area;
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
//float s,area;
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("%.2f",area);
	return 0;
}
