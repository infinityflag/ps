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
//char a[100];
int main() {
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    ll maxx = -1e15;
    for(int i=0;i<n;i++){
        cin >> a[i];
        maxx = max(a[i],maxx);
    }    
    sort(a.begin(),a.end());
    ll l = 1, r = maxx;
    while(l <= r){
        ll m = (l+r)/2;
        ll sum = 0;
        for(int i=0;i<n;i++){
            if(a[i]-m>0){
                sum += a[i]-m;
            }
            sum += a[i]-m;
        }
        if(sum >= k){
            l = m+1;
        }
        else{
            r = m-1;
        }
    }
    cout << l;
}



hard second try -> ac
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
//char a[100];
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    ll maxx = -1e15;
    for(int i=0;i<n;i++){
        cin >> a[i];
        maxx = max(a[i],maxx);
    }    
    sort(a.begin(),a.end());
    ll l = 0, r = maxx;
    while(l <= r){
        ll m = (l+r)/2;
        ll sum = 0;
        for(int i=0;i<n;i++){
            if(a[i]-m>0){
                sum += a[i]-m;
            }
        }
        if(sum >= k){
            l = m+1;
        }
        else{
            r = m-1;
        }
    }
    cout << r;
}
