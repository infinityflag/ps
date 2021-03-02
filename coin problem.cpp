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
using namespace std;
#define INF 1e9;
int n,k;
int coin[101];
int d[101];
int f(int val){//val의 값을 선택했을때의 범위 
    if(val == 0){
        return 0;
    }
    if(val < 0){
        val = INF;
        d[val] = INF;
    }
    for(int i=0;i<n;i++){
        d[val] = 1+min(f(val-coin[i]));        
    }
    return d[val];
}
int main() {
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> coin[i];
    }
    for(int i=0;i<=n;i++){
        f(i);
    }
    cout <<d[k];
    

} 
