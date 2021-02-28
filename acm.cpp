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
int chk[10001];
int a[100][100];
int main() {
    int t;
    cin >> t;
    while(t--){
        int h,w,target;
        cin >> h >> w>>target;
        int cnt = 0;
        for(int j=1;j<=h;j++){
            for(int i=w;i>=1;i--){
                a[i][j] = ++cnt;
            }
        }
        for(int i=1;i<=h;i++){
            for(int j=1;j<=w;j++){
                cout <<a[i][j]<<' ';
            }
            cout <<'\n';
        }
        /*
        int ans;
        for(int i=1;i<=h;i++){
            for(int j=1;j<=w;j++){
                if(a[i][j] == target){
                    ans = 100*i + j;
                    break;
                    //cout << ans;
                    //return 0;
                }
            }
        }
        cout << ans <<'\n';
        */
    }
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
#include <string>
using namespace std;
int chk[10001];
int a[100][100];
int main() {
    int t;
    cin >> t;
    while(t--){
        int h,w,target;
        cin >> h >> w>>target;
        int cnt = 0;
        for(int j=1;j<=h;j++){
            for(int i=w;i>=1;i--){
                a[i][j] = ++cnt;
            }
        }
        /*
        for(int i=1;i<=w;i++){
            for(int j=1;j<=h;j++){
                cout <<a[i][j]<<' ';
            }
            cout <<'\n';
        }
        */
        int ans;
        for(int j=1;j<=h;j++){
            for(int i=w;i>=1;i--){
                if(a[i][j] == target){
                    ans = 100*(h-i+1)+j;
                    break;
                    //cout << ans;
                    //return 0;
                }
            }
        }
        cout << ans <<'\n';
    }
}
