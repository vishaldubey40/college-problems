#include<stdio.h>
#include<math.h>
int main() {
int n,m,a;
scanf("%d%d%d",&n,&m,&a);
int t=(((n+a-1)/a) *((m+a-1)/a));
printf("%d",t);
return 0;
}
