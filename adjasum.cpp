#include <bits/stdc++.h>
using namespace std;
int main()
{
int t,i;
cin>>t;
while(t--)
{
int n;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cin>>a[i];
}
int x,y;
float max=-INFINITY;
for(x=0;x<n;x++)
{
int sum=0;
for(y=0;y<n;y++)
{
sum+=a[y];
if(sum>=max)
max=sum;
}
}
cout<<max<<endl;
}
return 0;
}
