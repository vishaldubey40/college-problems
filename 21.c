#include <stdio.h>

union number
{ int n1;
float n2;
}x;
int main(){
  union number x;
  scanf("%d",&x.n1);
  printf("Age=%d years",x.n1);
   scanf("%f",&x.n2);  
   printf("\nHeight=%.2f cm",x.n2);
	return 0;
}
