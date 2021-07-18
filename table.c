#include<stdio.h>

int main(){
    int n;
    printf("Enter the number for which you want the table: ");
    scanf("%d",&n);
    printf("Required table is obtained: \n");
    for(int i=1;i<=10;i++){
        
        printf("%d * %d = %d\n",n,i,n*i);
    }
}
