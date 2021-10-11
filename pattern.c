#include <stdio.h>
int main()
{int nooffamilymembers;
scanf("%d",&nooffamilymembers);
int i,a;
for(i=nooffamilymembers;i>=1;i--){
    a=i;
    while(a--){
        printf("%d ",i);
    }
    printf("\n");
}


	return 0;
}
