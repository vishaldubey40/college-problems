#include<stdio.h>

void total(int *s,int size){
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=s[i];
    }
     printf("sum of given array is: %d",sum);
}

int main(){
    int a[]={23,12,34,45,34};
    total(a,5);
   
    return 0;
}
