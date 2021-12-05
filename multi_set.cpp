#include <iostream>
using namespace std;
int power(int x,int p)
{
   return 0; 
}
int power(int x,int y,int p)
{
   return 0; 
}

int main()
{ int t;
cin>>t;
while(t--){
    int n,count=0;
    cin>>n;
    int k=2*n;
    int a[k];
    for(int i=0;i<2*n;i++){
        cin>>a[i];
    }
    for(int i=0;i<k;i++){
        if(a[i]%2==0){
            count++;
        }
    }
    
    if(count==n){
        cout<<"Yes"<<endl;
    }else
    cout<<"No"<<endl;
    
}

	return 0;
}
