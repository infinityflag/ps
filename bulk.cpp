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
//int arr[1000001];
int r[51];
int main()
{   
    int n,m;
    cin >> n >> m;
    //비교했을 떄 자기가 더 큰 거인 개수를 세고, n-1번 비교했을 떄 이 개수가 같다면 1
    //rotnrk rkxdms doemfdl dlTdmaus rkxdms emdtn Wnr
    int x[n],y[n];
    for(int i=0;i<n;i++){
        cin >> x[i] >> y[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(x[i] > x[j] && y[i] > y[j]){
                r[i]++;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int sc = n-1;sc >= 0; sc--){
            // 점수의 값이 sc이면
            if(r[i] == sc){
                // 같은 등수가 있나 확인
                for(int j=0;j<n;j++){
                    if(r[i] == r[j]){
                        r[j] =    
                    }
                }
            }
        }
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
#include <cmath>
using namespace std;
#define maxn 21
typedef long long ll;
//int arr[1000001];
int r[51];
int c[51]; 
int main()
{   
    int n,m;
    cin >> n;
    int x[n],y[n];
    for(int i=0;i<n;i++){
        cin >> x[i] >> y[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(x[i] > x[j] && y[i] > y[j]){
                r[i]++;
            }
        }
    }
    vector<int> v;
    for(int i=1;i<=n;i++){
        c[r[i]]++;
        if(c[r[i]]>=2){
            v.push_back(i);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(c[r[j]] >= 2){
                r[i] = j;
                break;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout << r[i] << ' ';
    }

    for(int i=1,ra=1;i<=n;i++){
        if(c[r[i]]>=2){
            if(r[i] > 2){
                
            }
        }
        else{
            cout << ra <<' ';
            ra++;
        }
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
typedef long long ll;
//int arr[1000001];
int r[51];
int c[51]; 
int main()
{   
    int n,m;
    cin >> n;
    int x[n],y[n];
    for(int i=0;i<n;i++){
        cin >> x[i] >> y[i];
    }
    for(int i=0;i<n;i++){
        int rank = 1;
        for(int j=0;j<n;j++){
            if(x[i] < x[j] && y[i] < y[j]){
                ++rank;
            }
        }
        cout << rank<<' ';
    }

}
