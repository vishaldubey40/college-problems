#include<stdio.h>
#include<stdlib.h>
int main() {
int n;
scanf("%d",&n);
int *arr=(int*)malloc(n*sizeof(int));  //dynamically allocated memory

for(int i=0;i<n;i++){
    arr[i]=i+1;
}
free(arr); //using this it will free an array and array give as  a garbage value
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
}
