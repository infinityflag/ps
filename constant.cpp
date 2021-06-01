//테크닉이 너무 약하다;;;;
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n,k;
	cin >> n >> k;
		vector<int> v,v2;
		int t = n;
		while(t){
			v.push_back(t%10);
			t /= 10;
		}
		int g1 = 0;
        for(int d:v){
            g1 = 10*g1+d;
        }
		int t2 = k;
        while(t2){
			v2.push_back(t2%10);
			t2 /= 10;
		}
		int g2 = 0;
		for(int d:v2){
            g2 = 10*g2+d;
		}
		cout << (g1>g2? g1:g2);}
