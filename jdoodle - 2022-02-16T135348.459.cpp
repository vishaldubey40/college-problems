#include <bits/stdc++.h>
using namespace std;
                                          //a+b+c = q;  a+b =x
int main() {
    int a,b,c;
     int arr[4];
     for(int i=0 ;i<4;i++)
     cin >>arr[i];
     sort(arr,arr+4);
    c = arr[3] - arr[0];
    b = arr[1] - c;
    a = arr[2]- c;
    cout<<a << " " << b << " " <<c <<endl;
}