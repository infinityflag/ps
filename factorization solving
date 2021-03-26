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
#define maxn 51

int prime[1000000];
bool check[1000000];
int p = 0;
int main()
{
    int n;
    cin >> n;
    for(int i=2;i<=n;i++){
        check[i] = false;
        if(!check[i]){
            for(int j=i*2;j*j<=n;j+=i){
                check[j] = true;
                prime[p++] = j;
            }
        }
    }
    
    for(int i=0;i<p;i++){
        cout << prime[i] <<' ';
    }
    vector<int> ans;
    int t = n;
    for(int i=0;i<p;i++){
        while(t % prime[i] == 0){
            ans.push_back(prime[i]);
            t /= prime[i];
        }
    }
    sort(ans.begin(), ans.end());
    for(int x:ans){
        //cout << x << '\n';
    }
    
    
}
        
        
        
        
second try -->ac


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
#define maxn 51
int prime[10000001];
int main()
{
    int n;
    cin >> n;
    //vector<int> prime(n);
    for(int i=1;i<=n;i++){
        prime[i] = true;
    }
    vector<int> a;
    for(int i=2;i*i<=n;i++){
        if(prime[i] == true){
            for(int j=i*2;j<=n;j+=i){
                prime[j] = false;
            }
        }
    }
    /*
    for(int i=2;i<=n;i++){
        if(prime[i] == true){
            if(n == i){
                cout << i;
                return 0;
            }
        }
    }
     */
    
    int t = n;
    vector<int> ans;
    while(t > 1){
        for(int i=2;i<=n;i++){
            if(prime[i] == true){
                //cout << i << ' ';
                if(t%i==0){
                    t /= i;
                    ans.push_back(i);
                }
            }
        }
    }
    sort(ans.begin(), ans.end());
    for(int x:ans){
        cout << x << '\n';
    }
    
    
    
}

