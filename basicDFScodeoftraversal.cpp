// codded by md.shaharia hasan
#include <bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<int>g[N];
int vis[N];int level[N];
void dfs(int source){
    stack<int>q;
    q.push(source);
    vis[source]=1;
    while(!q.empty()){
        int cur_vertex=q.top();
        q.pop();cout<<cur_vertex<<"->";
        for(int child: g[cur_vertex]){
            if(!vis[child]){
                q.push(child);
                vis[child]=1;
               // level[child]=level[cur_vertex]+1;
            }
        }
    }
    cout<<endl;
}
int main() {
   int node;
   cin>>node;
   for(int i=0;i<node;i++){
       int x,y;
       cin>>x>>y;
       g[x].push_back(y);
       g[y].push_back(x);
   }
   dfs(1);
  
    return 0;
}
