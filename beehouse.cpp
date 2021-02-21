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
    int i,cnt=0;
    for(i=2;i<= n;++cnt,i+= 6*cnt){
    }
    cout << cnt+1;
    
    //생각 하면 할수록 복잡해진다
    /*
    1 : 1 
    2 7 : 2 - 6
    8 19 : 3 - 12
    20 37 : 4 -38-20 = 18
    38 61 : 5 - 62-38 = 24
    총 6개씩 많아지는 조건이 있음
    */
}
