#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <queue>
typedef long long ll;
using namespace std;
#define vi vector<int> a;
#define maxn 100001
#define INF 1e9 + 7
int n,m;
int dis[maxn];
bool visit[maxn];
vector<pair<int, int> > graph[maxn];

int main()
{
    cin >> n >> m;
    for(int i=0;i<maxn;i++){
        dis[i] = INF;
    }
    for(int i=0;i<n;i++){
        int f,t,v;
        cin >> f >> t >> v;
        graph.push_back({t,v});
        graph.push_back({f,v});
    }
    //모든 값에서 실행 했을 떄의 값
    //n + vloge
    priority_queue<pair<int, int > > pq;
    for(int i=1;i<=n;i++){
        
    }
    pq.push({0,start});
    dist[start] = 0;
    if(){
        
    }
    while(!pq.empty()){
        int a = pq.top().second;
        pq.pop();
        for(auto u: graph[a]){
            if(!visit[u]){
                if(dis[])
            }
        }
    }

}

