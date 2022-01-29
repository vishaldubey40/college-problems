#include <bits/stdc++.h>

using namespace std;

int main() {
  long long int size,val;
    cin >> size>> val;
     int et=0,count=0;
     for(int i=1;i<=size;i++){
         if(val%i==0&&val/i<=size)
         count++;
     }
    cout<<count<<endl;
}
    
