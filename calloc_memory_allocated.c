#include<stdio.h>
#include<stdlib.h>
int main() {
int n;
scanf("%d",&n);
int *arr=(int*)calloc(n,n*sizeof(int));  //dynamically allocated memory
//if we not intialise array usng calloc it will take intialisation as a zero.

for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
}
