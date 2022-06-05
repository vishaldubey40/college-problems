#include<bits/stdc++.h>

using namespace std;
const int N = 1e5;
const int INF = 1e9;
int n, m;
vector<pair<int,int>> g[N];
vector<int> lvl(N,INF);


int dfs(){
    deque<int> q;
    q.push_back(1);
    lvl[1]=0;

    while(!q.empty()){
        int curr_v = q.front();
        q.pop_front();
        for(auto child : g[curr_v]){
            int child_v = child.first;
            int wt = child.second;
            if(lvl[curr_v] + wt < lvl[child_v]){
                lvl[child_v] = lvl[curr_v] + wt;
                if(wt==1){
                    q.push_back(child_v);
                }else{
                    q.push_front(child_v);
                }
            }
        }

    }
    return lvl[n] == INF ? -1 : lvl[n];
}

int main(){
    cin >> n >> m;
    while(m--){
        int x, y;
        cin >> x >> y;
        g[x].push_back({y,0});
        g[y].push_back({x,1});
    }
    cout<<dfs()<<endl;
}