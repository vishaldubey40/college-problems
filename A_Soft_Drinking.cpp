#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b, c, d, e, f, g;
    cin >> n >> a >> b >> c >> d >> e >> f >> g;
    int temp = a*b;
    int t = temp/f;
    int p = c*d;
    int q = e/g;
    cout << min(t,min(p,q))/n;    

}