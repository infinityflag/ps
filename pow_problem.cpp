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

int arr[1000001];
int main()
{
    int t;
    cin >> t;
    while(t--){
        int cnt[10];
        for(int i=0;i<10;i++){
            cnt[i] = 0;
        }
        int a,b;
        cin >> a >> b;
        int i=1;
        int tmp = 1;
        while(1){
            if(cnt[tmp]>=2){
              break;
            }
            tmp = ((tmp%10)*a)%10;
            cout << "tmp: " << tmp << '\n';
            arr[i] = tmp;
            cnt[tmp]++;
            i++;
        }
        for(int ii = 1; ii<=i;ii++){
            cout << arr[ii] << ' ';
        }
        cout <<'\n';
        //3 9 7 1
        //7%4 = 3

    }
}




later...
    
    
    
    
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

int arr[1000001];
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        for(int i=0;i<=10;i++){
            cnt[i] = 0;
        }
        int a,b;
        cin >> a >> b;
        int tmp = 1;
        for(int i=1;i<=b;i++){
            tmp = (tmp*a)%10;
            if(tmp == 0) tmp = 10;
            //cout << "tmp: " << tmp << '\n';
            //cnt[tmp]++;
            //if(cnt[tmp]>=2){
              //break;
            //}
            arr[i] = tmp;
        }
        //와! 정말 구현이 꼬이는구나!
        /*
        for(int ii = 1; ii<i;ii++){
            cout << arr[ii] << ' ';
        }
        cout <<'\n';
        */
        //cout << max(arr[b%(i-1)], arr[(i-1)%b]) << '\n';
        cout << arr[b]<<'\n'; 
    }
}


the last one

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
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int tmp = 1;
        for(int i=1;i<=b;i++){
            tmp = (tmp*a)%10;
            if(tmp == 0) tmp = 10;
            //arr[i] = tmp;
        }
        //cout << arr[b]<<'\n'; 
        cout << tmp <<'\n';
    }
}

