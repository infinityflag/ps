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
char a[100];
int convert(char c){
    if('0' <= c && c <= '9') return c-'0';
    else return c-'A'+10;
}
int main() {
    int t = 10;
    for(int i='A';i<='Z';i++){
        a[i] = t;
        t++;
    }
    string s;
    int b;
    cin>>s>>b;
    ll sum = 0;
    int power 
    for(int i=s.size()-1;i>=0;i--){
        sum += pow(b,i)*convert(s[i]);
    }
    cout << sum;
    if(arr[i] == s)
}
