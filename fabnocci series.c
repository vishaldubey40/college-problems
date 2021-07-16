#include<stdio.h>

int main() {
   int n,k=0,p=1,n1;
   printf("Enter number of terms in fibonacci series:");
   scanf("%d",&n);
   printf("%d\n%d %d ",n,k,p);
  for(int i=2;i<=n;i++){
      n1=k+p;
      printf("%d ",n1);
      k=p;
      p=n1;
   }
   
    
}
