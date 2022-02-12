#include<bits/stdc++.h>

using namespace std;
long long const int N=1e5+7;
long long int pf[N];
int main(){
    long long int n, a;
    cin >> n;
    for(long long int i = 0; i < n; i++)
   { cin >> a;
       pf[a]++;
   }
   for(long long int i = 1; i < N; i++)
   { 
       pf[i]=pf[i-1]+pf[i];
   }
    long long int q;
    cin >> q;
    while(q--){
        long long int m;
        cin >> m;
        if(m <= 1e5)
        cout << pf[m] << endl;
        else
        cout << n << endl;
    }
    return 0;
}
