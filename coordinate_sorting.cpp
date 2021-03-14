first try

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

//int arr[1000001];
int main()
{
    int n;
    cin >> n;
    vector<pair<int,int> > v(n);
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y; 
        v.push_back({x,y});
    }
    sort(v.begin(), v.end());

    for(int i=0;i<v.size();i++){
        cout << v[i].first << ' '<<v[i].second<<'\n';
    }

}


second

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

int main()
{
    int n;
    cin >> n;
    //vector<pair<int,int> > v(n);
    map<int,int> m;
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        m[x] = y;
    }
    //sort(v.begin(), v.end());
    sort(m.begin(), m.end());
    /*
    for(int i=0;i<v.size();i++){
        cout << v[i].first << ' '<<v[i].second<<'\n';
    }
    */
    map<int,int>::iterator iter;
    for(iter=m.begin(); iter != m.end(); ++iter){
        cout << m[iter];
    }
}


third try -> ac

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

//int arr[1000001];

bool cmp(pair<int,int>&a,pair<int,int>&b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    return a.first < b.first;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    vector<pair<int,int> > v(n);
    for(int i=0;i<n;i++){
        cin >> v[i].first >> v[i].second;
        //int x,y;
        //cin >> x >> y; 
        //v.push_back({x,y});
    }
    sort(v.begin(), v.end(),cmp);
    for(auto i: v){
        cout << i.first << ' '<<i.second<<'\n';
    }
}


