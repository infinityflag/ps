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
#include <cmath>
#include <math.h>
#include <string>
typedef long long ll;
using namespace std;
int a[1005][1005];
int d[1005][1005];
int check_row[1005];
#define inf 1e9
int n;
int minx = 1e9;
void f(int row, int sc){
    if(row == n){
        minx = min(minx, sc);
        return;
    }
    for(int i=0;i<n;i++){
        if(check_row[i] == 0){    
            check_row[i] = 1;
            f(row+1, sc + a[row][0]);
            check_row[i] = 0;
        }    
    }
}
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin >> a[i][j];
        }
    }
    f(0,0);
    cout << minx;
}




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
#include <cmath>
#include <math.h>
#include <string>
typedef long long ll;
using namespace std;
#define inf 1e9
//dist가 작은 값까지 탐색을 하도록 한다.
//하나의 점으로 했을 때 최소 거리를 구하는 함수를 만든다. 
//다른 경찰차도 마찬가지로 만든다.
//그동안 이동했던 거리의 cnt를 구한다.  
int n,m;
int w;
int E[1005][2];
int ans = 1e9;
int col_check[1005];
int a[1005][1005]; 
//dynamical backtracking
void solve(int y,int c,int prev){
    if(y == n+1){
        ans = min(c, ans);
        return;
    }
    for(int i=1;i<=3;i++){
        if(prev != i){
            col_check[y] = 0;    
            solve(y+1,c+a[y][i],i);
            col_check[y] = 1;
        }
    }
}
int arr[100005];
void input(){
    cin >> n;
    int minn = 1e9; 
    for(int i=0;i<n;i++){
        cin >> arr[i];
        minn = min(minn, arr[i]); 
    }
    for(int i=0;i<n;i++){
        if(){
            
        }
    }
    cout << minn*n;


}

int main(){
    input();
    return 0;
}
