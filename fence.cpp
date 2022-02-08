#include <bits/stdc++.h>

using namespace std;
const int N= 1e6 + 20;
int pf[N];
int main() {
    int n, m;
    cin >> n >>m;
    for(int i=1;i<=n;i++){
        int a;
        cin >> a;
        pf[i]+= pf[i-1] + a;
    }
    int min=pf[n],j;
    // cout << min <<endl;
    if(n - m !=0){
    for(int i=0;i<=n-m;i++){
        if(min > (pf[m+i]-pf[i])){
            min = pf[m+i] - pf[i];
            j=i;
        }
    }
    cout << j + 1 <<endl;
    }else
    cout << 1 <<endl;
}
