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

int cnt[11];
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int sum = 0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            sum += a[i];
        }
        int aver = sum/n;
        double t = 0.0, nn = n;
        for(int i=0;i<n;i++){
            if(aver < a[i]){
                t++;
            }
        }
        printf("%.3lf%%\n", t/n*100);

    }
}
