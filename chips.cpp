#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t];
for(int i=0;i<t;i++){
    cin>>a[i];
}
 int min=1000;
int aw=t,count=0;
int i=t;
  while(i--){
      count=0;
    for(int j=0;j<t;j++){
        if(abs(a[i]-a[j])%2==1){
            count++;

    }
    
}
 if(count<min){
    min=count;
}

}
cout<<min<<endl;
}
