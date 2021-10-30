#include <iostream>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--){
    int n;
cin>>n;
char S[100],R[100];
int count=0,count1=0;
cin>>S>>R;

for(int i=0;i<n;i++){
    if(S[i]=='1'){
        count++;
    }
}
for(int i=0;i<n;i++){
    if(R[i]=='1'){
        count1++;
    }
}
if(count==count1){
    cout<<"YES"<<endl;
}else
cout<<"NO"<<endl;
}
	return 0;
}
