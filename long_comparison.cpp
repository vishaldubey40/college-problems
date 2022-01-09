#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        float a,b,c,d;
        float m,n;
        cin>>a>>b>>c>>d;
        int g=a,count=0,ct=0;
        int h=c;
        while(g){
            g=g/10;
            count++;
        }
        while(h){
            h=h/10;
            ct++;
        }
      //  cout<<count<<ct;
        if(count-ct>0){
            int k=(count-ct);
            while(k--)
           { a=a/10; b+=1;
           //cout<<k<<"l";
           }
        }else{
            int k=(ct-count);
          //  cout<<k;
            while(k--)
           { c=c/10; d+=1;//cout<<k;
           }
        }
      //  cout<<a;
        if((a>c)&&(b>=d)){
            cout<<">"<<endl;
        }else if((a>c)&&(b<=d)){
            cout<<"<"<<endl;
        }
        else if(a<c&&b<=d){
            cout<<"<"<<endl;
        }else if(a<c&&b>=d){
            cout<<">"<<endl;
        }else if(a==c&&b>d){
            cout<<">"<<endl;
        }else if(a==c&&b<d){
            cout<<"<"<<endl;
        }else
        {
            if(a==c&&b==d){
            cout<<"="<<endl;
        }
        }
    }
}
