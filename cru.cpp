//
//  main.cpp
//  cp practice
//
//  Created by jm on 2021/02/16.
//

#include <iostream>
#include <algorithm>
using namespace std;

void dfs(int a[],vector<int> v[],int u, int p){
    dp[u] = a[u-1];
    
    for(auto child: v[u]){
        if(child == p){
            continue;
        }
        dfs(a,v,child,u);
        maxx = max(maxx, dp[child]);
    }
    dp[u] += maxx;
}


int main()
{
    
    dfs(1,0);
    
    
}
