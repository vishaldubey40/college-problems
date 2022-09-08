#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        // multimap<int,int> m; 
        vector<vector<int>> v;
        for(int i=0;i<n;i++)
        { cin>>arr[i];
        // m.insert({arr[i],i});
        }
        // sort(temp,temp+n);

        int max=-1;
        int in;
        for(int i=0;i<n;i++){
            if(max<=arr[i]){
            max=arr[i];
            in=i;}
        }
        cout<<in+1<<endl;

    }
}