#include<stdio.h>

void swap(int *a,int *b){
    int temp;
    temp =*a;
    *a=*b;
    *b=temp;

}

int main(){
    int a,b;
    printf("Enter two numbers ");
    scanf("%d%d",&a,&b);
    printf("m is %d n is %d \n",a,b);
    swap(&a,&b);
    printf("m after swap %d and n after swap is %d\n",a,b);
    return 0;
}
