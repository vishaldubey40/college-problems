#include <bits/stdc++.h>
using namespace std;

int main() {
long long int  t;
    cin>>t;
    while(t--){
       long long int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

	// Define an map
	map<int, int> M;

	// Traverse vector vec check if
	// current element is present
	// or not
	for (int i = 0; i<n; i++) {

	
		if (M.find(v[i]) == M.end()) {
			M[v[i]] = 1;
		}
		// Else update the frequency
		else {
			M[v[i]]++;
		}
	}


int p=0;
 set<long long int> l;
 for (auto& it : M) {
    if(it.second==1||it.first==0){
        l.insert(it.first);
            }else{
    if(it.second>1){
        l.insert(it.first);
        l.insert(-it.first);
    }
            }
}
cout<<max(l.size(),M.size())<<endl;
}
    
}
