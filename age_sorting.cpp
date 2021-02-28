//compliation error 
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


int map_sort(pair<int,string> a,pair<int,string>b){
    return a.first > b.first;
}
int main() {
    int n;
    map<int,string> m;
    for(int i=0;i<n;i++){
        int age;
        string name;
        cin >> age >> name;
        m[age] = name;
    }
    sort(m.begin(), m.end(),map_sort);
    vector<pair<int,string> > v;
    for(auto& it: m){
        v.push_back(it);
    }
    sort(v.begin(), v.end(), map_sort);
    for(auto &it:v){
        cout << it.first << ' '<<it.second <<'\n';
    }
}
