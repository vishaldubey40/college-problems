#include <stdio.h>
int main()

{ int n,i,j,temp;
scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(array[i]>array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
for(i=0;i<n;i=i+2){
    temp=array[i];
    array[i]=array[i+1];
    array[i+1]=temp;
}
 for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
	return 0;
}
