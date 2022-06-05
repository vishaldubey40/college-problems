#include<bits/stdc++.h>

using namespace std;
const int N=1e5+8;
int lvl[8][8];
int vis[8][8];
// #define inf 1e5
// const int inf = 1e5;
int getx(string s){
    return s[0]-'a';
}
int gety(string s){
    return s[1] - '1';
}

vector<pair<int,int>> movements = {
    {-2,1},{2,1},
    {-1,2},{1,2},
    {-2,-1},{2,-1},
    {-1,-2},{1,-2}
};

bool is_valid(int x, int y){
    return (x>=0&&y>=0&&x<8&&y<8);
}

int bfs(string source,string dest){
    int s1x = getx(source);
    int s1y = gety(source);
    int s2x = getx(dest);
    int s2y = gety(dest);

    queue<pair<int,int>> q;
    q.push({s1x,s1y});
    vis[s1x][s1y] = 1;
    while(!q.empty()){
        pair<int,int> v = q.front();
        q.pop();
        int x = v.first,y = v.second;
        for(auto movement:movements){
            int childx = movement.first + x;
            int childy = movement.second + y;
            if(!is_valid(childx,childy)) continue;
            if(!vis[childx][childy]){
            q.push({childx,childy});
            vis[childx][childy] = 1;
            lvl[childx][childy] = lvl[x][y] + 1;
            }

        }
        // if(lvl[s2x][s2y] != inf ){
        //     break;
        // }

    }
return lvl[s2x][s2y];
}

void reset(){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
        vis[i][j]=0;
        lvl[i][j] = 0;
        }
    }
}

int main(){
    int n;
    cin >> n;
    while(n--){
        reset();
    string s1, s2;
    cin >> s1 >> s2;
    cout<<bfs(s1,s2)<<endl;
    }
}