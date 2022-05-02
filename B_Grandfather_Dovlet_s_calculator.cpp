#include<bits/stdc++.h>
using namespace std;

vector<int> v{6,2,5,5,4,5,6,3,7,6};

int main(){
    int a, b;
    cin >> a >> b;
    long long int sum = 0;
    for(int i=a;i<=b;i++){
        int j = i;
        while(j){
            sum+=v[j%10];
            j=j/10;
        }
    }
    cout<<sum<<endl;
}