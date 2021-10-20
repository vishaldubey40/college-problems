#include<iostream>
#include<string.h>
using namespace std;
void check_subsequence(char a[],char b[]){
 int c=0,d=0;  //good question takes 2 days
 while(a[c]!='\0'){
 while(a[c]!=b[d]&& b[d]!='\0')
 d++;
 if(b[d]=='\0')
 break;
 d++;c++;
}
if(a[c] =='\0')
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
int main()
{
int t;
cin>>t;
while(t--){
 char M[25000],W[25000];
 cin>>M>>W;
 
if(strlen(M)<strlen(W))
check_subsequence(M,W);
else
check_subsequence(W,M);
}
return 0;
}
