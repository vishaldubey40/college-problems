#include<bits/stdc++.h>

using namespace std;

vector<int> v(1500);

int ctoint(char s){
stringstream g;
        g<<s;
        int x = 0;
        g>> x;
        return x;
}
int main (){
    int t;
    cin >> t;
    v[0]=1;
    v[70]=1;
    v[210]=1;
    v[140]=1;
    v[280]=1;
    v[350]=1;
    v[671]=1;
    v[741]=1;
    v[811]=1;
    v[881]=1;
    v[951]=1;
    v[1202]=1;
    v[1342]=1;
    v[1412]=1;
    v[1272]=1;
    v[601] = 1;
    

    while(t--){
        string s;
        cin >> s;
        int k;
        cin >> k;
        
        int num = ctoint(s[0]);
        int h = ctoint(s[1]);
        num = num*10+h;
        num = num*60;
        int num1 = ctoint(s[3]);
        int h1 = ctoint(s[4]);
        num1 = num1*10+h1;
        num +=  num1;
        int tem = num;
        int cnt =0;
        while(1){
            if(v[num]==1)
            cnt++;
            if(num+k<1440)
                num+=k;
            else{
                num+=k;
                num = num - 1440;
            }
            if(num==tem) break;
        }
        cout<<cnt<<endl;
    }
}