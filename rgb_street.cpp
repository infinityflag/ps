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
