#include<stdio.h>

int main() {
         int n,k=1;
        printf("Enter the number : ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            k*=i;
        }        printf("Factorial of given number is: %d\n",k);
            
        
    
}
