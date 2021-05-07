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
#define inf 1e9
int maxx = -1e9;
int n,m;
int f(int x, int y, int sum){
    if(x >= n && y >= m){
        return 0;
    }
    /*
    if(x==n && y==m){
        maxx = max(maxx,sum);
        return 1;
    }
    */
    int &ans = d[x][y];
    if(d[x][y] != -1){
        return ans;
    }
    ans = max(f(x+1,y,sum+a[x+1][y]),f(x,y+1,sum+a[x][y+1]));
    return ans;
}
int main(){
    memset(d, -1, sizeof d);
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    //maxx = a[1][1];
    cout << f(1,1,0) + a[1][1];
    return 0;

}


second try
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
#define inf 1e9
int maxx = -1e9;
int n,m;
int f(int x, int y, int sum){
    if(x==n&&y==m){ 
        maxx = max(maxx,sum);
        return 1;
    }
    if(!d[x][y]){
        return d[x][y];
    }
    if(x <= 0 || y <= 0 || x > n || y > m){
        return 1;
    }
    return d[x][y] = f(x+1,y,sum+a[x][y]) + f(x,y+1,sum+a[x][y]);
}
int main(){
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    //maxx = a[1][1];
    f(1,1,0);
    cout << maxx + a[1][1];
    return 0;

}
