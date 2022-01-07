#include <bits/stdc++.h>
#define mp make_pair
using namespace std;
vector<int>gg[105], cost[105];
int n,e,t,m;
int cont = 0;

vector<int> djastraka(int x){

    vector<int>dist(n+1);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> >pq;
    for (size_t i = 0; i <= n; i++)
    {
        dist[i] = INT_MAX/2;
    }
    dist[x] = 0;
    pq.push(mp(0,x));
    while (!pq.empty())
    {
        pair<int,int> pp = pq.top();
        int u = pp.second;
        pq.top();
        for (size_t i = 0; i < gg[u].size(); i++)
        {
            int v=gg[u][i];
            if (dist[v] > dist[u] + cost[u][i])
            {
                dist[v] = dist[u] + cost[u][i];
                pq.push(mp(dist[v],v));
            }
            
        }
        
    }
    return dist;

}


// int main(){
//     int test;
//     cin >> test >> n >> e >> t >> m;
//     for (size_t i = 0; i < m; i++)
//     {
//         int x,y,z;
//         cin >> x >> y >> z;
//         gg[y].push_back(x);
//         cost[y].push_back(z);
//     }
    
//     int ans = 0;
//     vector<int> djastra = djastraka(e);
    
//     for (size_t i = 1; i <= n; i++)
//     {
//         if (djastra[i] <= t)
//         {
//             ans++;
//         }
        
//     }
//     cout << ans << endl;

// }


// #include <stdio.h>
// #include <queue>
// #include <string.h>
// using namespace std;
// struct edge {
//     int to, v;
//     edge(int a, int b):
//         to(a), v(b) {}
// };
// int main() {
//     int testcase;
//     int n, m, st, time;
//     int i, j , k, x, y, v;
//     scanf("%d", &testcase);
//     while(testcase--) {
//         scanf("%d %d %d %d", &n, &st, &time, &m);
//         vector<edge> g[105];
//         while(m--) {
//             scanf("%d %d %d", &x, &y, &v);
//             g[y].push_back(edge(x, v));
//         }
//         int dist[105], inq[105] = {};
//         memset(dist, 63, sizeof(dist));
//         dist[st] = 0;
//         queue<int> Q;
//         Q.push(st);
//         while(!Q.empty()) {
//             int tn = Q.front();
//             Q.pop(), inq[tn] = 0;
//             for(vector<edge>::iterator it = g[tn].begin();
//                 it != g[tn].end(); it++) {
//                 if(dist[it->to] > dist[tn] + it->v) {
//                     dist[it->to] = dist[tn] + it->v;
//                     if(inq[it->to] == 0) {
//                         inq[it->to] = 1;
//                         Q.push(it->to);
//                     }
//                 }
//             }
//         }
//         int ret = 0;
//         for(i = 0; i <= n; i++ )
//             if(dist[i] <= time)
//                 ret++;
//         printf("%d\n", ret);
//         if(testcase)
//             puts("");
//     }
//     return 0;
// }



#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<string>
#include<stack>
#include<queue>
#include<deque>
#include<stdlib.h>
#include<map>
#include<algorithm>
#include<list>
#include<vector>
#define pi acos(-1.0)
#define inf_max 2147483647
#define inf_min -2147483647
#define N 30010
using namespace std;

struct node {
  int cost;
  int x;
  int y;
  node(){}
  node(int nweight, int nx, int ny) : cost(nweight),x(nx),y(ny){}
  bool operator <(const node &e)const{
        return cost > e.cost;
    }
};
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int dis[1001][1001];
int graph[1001][1001];

int dijkstra(int graph[1001][1001], int nrows, int ncols)
{
    priority_queue<node> q;
    for(int i = 0; i < nrows; ++i)
        for(int j = 0; j < ncols; ++j)
            dis[i][j] = inf_max;
    q.push(node(graph[0][0], 0, 0));
    dis[0][0] = graph[0][0];

    while ( !q.empty() )
    {
        node s = q.top();
        q.pop();
        if ( s.x == nrows-1 && s.y == ncols-1 )
          return s.cost;
        for(int i = 0; i < 4; ++i)
        {
              int nx = s.x + dx[i];
              int ny = s.y + dy[i];
              if ( nx >= 0 && nx < nrows && ny >= 0 && ny < ncols )
              {
                    if ( dis[nx][ny] > dis[s.x][s.y] + graph[nx][ny] )
                    {
                      dis[nx][ny] = dis[s.x][s.y] + graph[nx][ny];
                      q.push(node(dis[s.x][s.y] + graph[nx][ny],nx,ny));
                    }
              }
        }
    }
  return -1;
}
char line[3000];
int main()
{
    int nboards;
    scanf("%d", &nboards);
    for(int k = 0; k < nboards; ++k)
    {
          int ncols, nrows;
          scanf("%d\n%d\n",&nrows,&ncols);
      for(int i = 0; i < nrows; ++i)
      {
        gets(line);
        for (int j = 0; j < ncols; ++j)
            graph[i][j] = line[j*2] - '0';
      }
      printf("%d\n",dijkstra(graph,nrows,ncols));
    }
  return 0;
}