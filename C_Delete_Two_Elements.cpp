#include<bits/stdc++.h>

using namespace std;

long long int count( long long int arr[], long long int x,long long int n,long long int i)
{   
   long long int *low = lower_bound(arr+i+1, arr+n, x);
 
  
  if (low == (arr + n) || *low != x)
     return 0;
    
   
  long long int *high = upper_bound(low, arr+n, x);    
    
  
  return high - low;
}


int main(){
   long long int t;
    cin >> t;
    while(t--){
       long long int n;
        cin>> n;
        long long int v[n];
         long long int sum=0;
        double mean;
        for(long long int i=0;i<n;i++)
        {cin>>v[i];
        sum+=v[i];
        }
        mean = (double)sum/n;
        
        double am= (double)mean*(n-2);
        long  long int check=am;

        if(am-check>0&&(am-check)<1){
            cout<<0<<endl;
            continue;
        }
        // cout<<am<<endl;
       long long int ac=abs(sum-am);
        
       long long  int cnt=0;
        sort(v,v+n);
        for(long long int i=0;i<n-1;i++){
        long long int x = abs(v[i] - ac);
       cnt+=count(v,x,n,i);

        }
       cout<<cnt<<endl;  
   }
}