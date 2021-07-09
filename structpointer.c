#include<stdio.h>

struct structpointer
{   int a;
     int b;
     int c;
     char ar[10];
    /* data */
}*v1,v2,v3;
int main(){
    v1=&v2;
    scanf("%d%d%s",&v1->a,&v1->b,v1->ar);
   
    printf("value entered by the users is :%d %d %s",v1->a,v1->b,v1->ar);
}
