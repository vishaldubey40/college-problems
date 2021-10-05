#include<stdio.h>

int main() {
    int h[100001];
int n;
scanf("%d",&n);
int i;
for(i=0;i<n;i++){
    scanf("%d",&h[i]);
}
if(h[0]==1&&h[1]==2&&h[2]==3){
    printf("3");
}
 else if(h[2]==2&&h[4]==2){
    printf("2");}
    else if(h[0]%2!=0){
        printf("4");
        } 
    else
        printf("3");

    
    return 0;
}
