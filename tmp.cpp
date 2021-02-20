#include <iostream>
#include <algorithm>
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
#define maxn 21
using namespace std;
#define maxn 21
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a >= b){
        if(b > c){
            cout << b;
        }
        else cout << c;
    }
    else if(a < b){
        if(a > c){
            cout << a;
        }
        else cout << c;
    }
    else{
        if(c >= a){
            cout << a;
        }

    }
    else if(c >= a){
        cout << a;
    }
    else if(b >= c){
        cout << b;
    }
    else if(c > b){
        cout << c;
    }
    else if(a > c){
        if(c >= b){
            cout << c; 
        }    
        else{
            cout << b;
        }
    }
    
}
