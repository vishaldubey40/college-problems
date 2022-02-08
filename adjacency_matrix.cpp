#include <bits/stdc++.h>

using namespace std;         // inserting element in graph using adjacency list;
const int N = 1e3 + 10;
int graph[N][N];

int main() {
  int n, m;
  cin >> n >>m;
  for(int i=0;i<m;i++){
      int a, b;
      cin >> a >>b;
      graph[a][b] = 1;
      graph[b][a] = 1;
  }
}
