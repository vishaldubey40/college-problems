#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int size, sum;
        cin >> size>> sum;
        int arr[size];
        for(int i=0;i<size;i++)
        cin >> arr[i];
        int sum_array = accumulate(arr,arr+size,0);
        if(sum_array<sum)
            cout<<"-1"<<endl;
        else if(sum_array==sum)
        cout<<0<<endl;
        else{
            vector<int> v;
        for(int i=0;i<size;i++){
            if(arr[i])
            v.push_back(i);
        }
        int dif = sum_array - sum;
        int sum1=sum_array;
        int ans = 0, min_ans = 10000000;
        int min2 = size - v[v.size()-dif];
        for(int i=0;i<dif;i++){
            ans+=(v[i]+1);
             sum_array = sum_array - (i+1);
            int req_sum;
            req_sum=sum_array-sum;
            // cout<<sum_array<<endl;
            if(req_sum!=0&&sum_array!=sum) 
            ans+=(size-v[v.size()-req_sum]);
            // cout<<ans<<" "<<min_ans<<endl;
            if(ans<min_ans)
            min_ans = ans;
            // cout<<ans<<" "<<min_ans<<endl;
            ans = 0;
            sum_array = sum1;
        }
        cout<<min(min_ans,min2)<<endl;
         }
    }
}