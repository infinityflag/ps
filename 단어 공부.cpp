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
typedef long long ll;
int chk[1000];
int main() {
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if('a'<=s[i] &&s[i] <='z'){
            s[i] = s[i] + 32;
        }   
    }

    for(int i=0;i<s.size();i++){
        chk[s[i]]++;
    }
    int maxc = -1e9, ans; 
    for(int i='A';i<='Z';i++){
        if(maxc<chk[i]){
            maxc = chk[i];
            ans = i;
        }
    }
    cout << ans;
}
