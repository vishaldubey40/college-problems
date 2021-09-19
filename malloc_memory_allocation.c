#include<stdio.h>
#include<stdlib.h>
int main() {
int n;
scanf("%d",&n);
int *arr=(int*)malloc(n*sizeof(int));

for(int i=0;i<n;i++){
    arr[i]=i+1;
}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
}
