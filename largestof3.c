#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter three number: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c){
        printf("Greatest number is: %d\n",a);
         }else
         if(b>a&&b>c){
             printf("Greatest number is: %d\n",b);
         }else
         printf("Greatest number is: %d",c);
}
