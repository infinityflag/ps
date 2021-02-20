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
        int t = 0;
        for(int i=0;i<n;i++){
            if(aver < a[i]){
                t++;
            }
        }
        //cout << (double)t/n*100<< "%"<<'\n';
        //printf("%f")

        double tt = t/n*100;
        cout << setprecision(7);
        cout << tt <<"%" <<'\n';
    }
}
