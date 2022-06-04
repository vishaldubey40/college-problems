#include<bits/stdc++.h>

using namespace std;
const int N = 1e4+7;
vector<int> g[N];

int vis[N];
int lvl[N];

void bfs(int source){
    queue<int> q;
    q.push(source);
    vis[source] = 1;
    
    while(!q.empty()){
        int cur_v = q.front();
        q.pop();
        cout<<cur_v<<" ";
        for(int child:g[cur_v]){
            if(!vis[child])
            {
                q.push(child);
                vis[child] = 1;
                lvl[child] = lvl[cur_v] + 1;
            }
        }
    }
    cout<<endl;
    
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n-1;i++){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    bfs(1);
    for(int i=0;i<n;i++){
        cout<<i<<" "<<lvl[i]<<endl;
    }
}
