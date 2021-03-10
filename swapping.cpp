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
void swap(int a, int b){
    int tmp;
    tmp = a; b = a; a = tmp;
}
int main() {
    string s;
    cin >> s;
    int n = s.size();
    string b1 =" ",b2 = " ";
    for(int i=0;i<n;i++){
        b1 += '0';
    }
    for(int i=0;i<n;i++){
        b2 += '1';
    }
    while(s == b1 || s == b2){
        //다른 부분의 원소를 구한다.
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k = 1;k<n-1;k++){
                    if(s.substr(j,k) != s[i]){
                        string s;
                        cin >> s;
                        
                    }
                }
            }
        }
    }



}
