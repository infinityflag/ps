//  main.cpp
//  cp practice
//
//  Created by jm on 2021/02/16.
#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <stdlib.h>
#include <cstring>
#include <string>

using namespace std;
#define maxn 21
int n,m;
int a[maxn][maxn];
int dx[] = {-1,0,0,1};
int dy[] = {0,1,-1,0};
bool visit[maxn][maxn];
int dist[maxn][maxn];
void bfs(int x, int y){
    visit[x][y] = true;
    queue<int> qx, qy;
    qx.push(x); qy.push(y);
        while(!qx.empty()){
            int x = qx.front();
            qx.pop();
            int y = qy.front();
            qy.pop();
            for(int i=0;i<4;i++){
                int cx = x + dx[i];
                int cy = y + dy[i];
                if(1<= cx && cx <= n && 1<= cy && cy <= m){
                    if(!visit[cx][cy] && a[cx][cy] == 1){
                        visit[cx][cy] = true;
                        dist[cx][cy] = dist[x][y] + 1;
                        qx.push(cx); qy.push(cy);
                    }
                }
            }
        }
}


int main()
{
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%1d", &a[i][j]);
        }
    }
    bfs(1,1);
    cout << dist[n][m] + 1;
}
