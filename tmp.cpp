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
