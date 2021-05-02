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
int n;
ll k;
int t[10001];
int s[10001];
vector<int> v,ans;
void solve(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> t[i] >> s[i];
    }
    for(int i=0;i<n;i++){
        v.push_back(round(t[i]/(double)s[i]));
        ans.push_back(i+1);
    }   
    for(int i=0;i<n-1;i++){ 
        if(v[i] > v[i+1]){
            int tmp = v[i+1]; 
            v[i+1] = v[i];
            v[i] = tmp;
            int tmp2 = ans[i+1];
            ans[i+1] = ans[i];
            ans[i] = tmp2;
        }
        else continue;
    }
    for(int i:ans){
        cout << i << ' ';
    }
}
int main(){
    solve();
    return 0;
}
