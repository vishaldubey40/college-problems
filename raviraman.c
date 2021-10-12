#include <stdio.h>
#include<string.h>
#define k (c==2)?printf("%d",p):printf("-1")
#define k1 scanf("%d",&arr[i])
#define k2 for(i=0;i<n;i++)
#define g
int main()
{int n,j,tp,c=0,i,p=1;
scanf("%d",&n);
int arr[n];
k2
k1;
k2{
for(j=i+1;j<n;j++){
if(arr[i]<arr[j]){
tp=arr[i];
arr[i]=arr[j];
arr[j]=tp;
}else if(arr[i]>=arr[j])
arr[i]=arr[i];
}
}
for(i=0;i<n-1;i++){
 if(arr[i]==arr[i+1]){
 if(c!=2){
  p*=arr[i];
 c++;
  }
 }
}
k;
	return 0;
}
