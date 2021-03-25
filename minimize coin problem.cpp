#include <iostream>
#include <algorithm>
#include <iomanip>
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
#include <cmath>
using namespace std;
#define maxn 21
typedef long long ll;
#define INF 1e9;
int n;
int a[100000]; 
int d[100000]; 
int change(int value){//value값을 만들기 위해 필요한 동전 수
    if(value == 0){
        return 0;
    }
    if(value < 0){
        return INF;
    }
    if(d[value] != -1) return d[value];
    int minx = 1e9;
    for(int i=0;i<n;i++){ 
        if(value-a[i]>0){
            d[i] = min(d[i],d[value-a[i]]);
        }
    }
    return d[value] = minx;
}
int main()
{  
    ios_base::sync_with_stdio(0); cin.tie(0);
    int k;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    memset(d, -1,sizeof d);
    int st = change(k); 
    if(st == 1e9){
        cout << -1;
    }
    else{
        cout << st;
    }
}
