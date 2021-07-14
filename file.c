#include<stdio.h>
#include<stdlib.h>

int main(){
    
     char name[20];
    int age;
    FILE *fptr;
    fptr=fopen("vish.txt","w");
      printf("enter your name: ");
    scanf("%s",name);
    printf("enter your age ");
    scanf("%d",&age);
    fprintf(fptr,"My Name is :%s\n",name);
    fprintf(fptr,"age is :%d",age);
fclose(fptr);
return 0;
}
