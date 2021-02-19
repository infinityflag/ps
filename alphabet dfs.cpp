//  main.cpp
//  cp practice
//
//  Created by jm on 2021/02/16.
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
#define maxn 21
int n,m;
char a[maxn][maxn];
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
                if(0<= cx && cx < n && 0<= cy && cy < m){
                    if(!visit[cx][cy]){
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
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    int cnt[150];
    int ans = 0;
    memset(cnt,0,sizeof cnt);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!visit[i][j]&& cnt[(int)a[i][j]] <= 1){
                cnt[(int)a[i][j]]++;
                bfs(i,j);
                ans++; 
            }
        }
    }
    
    cout << ans;





    
}
