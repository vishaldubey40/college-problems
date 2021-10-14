#include <stdio.h>
#include<math.h>
struct circleshape
{
    int radius,x1,y1,x2,y2;
};
int main()
{struct circleshape dis;
scanf("%d%d%d%d%d",&dis.x1,&dis.y1,&dis.radius,&dis.x2,&dis.y2);
int k,j;
k=pow((dis.x1-dis.x2),2);
j=pow((dis.y1-dis.y2),2);
if((dis.radius*dis.radius)>=(k+j)){
    printf("BALL LANDED INSIDE THE STADIUM");
}else
printf("BALL IS OUT OF THE STADIUM");

	return 0;
}
