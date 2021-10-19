#include <iostream>
using namespace std;
int main()
{
int l,w,h;
cin>>l;
cin>>w>>h;
if(l>w||l>h){
    cout<<"UPLOAD ANOTHER";
}else if(l<w&&l<h){
    cout<<"CROP IT";
}else
cout<<"ACCEPTED";
return 0;
}
