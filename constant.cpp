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
		while(n){
			v.push_back(t%10);
			t /= 10;
		}
		int sum1 = 0, sum2=0;
		for(int i=v.size()-1;i>=0;i--){
			if(i==0){
				sum1 += v[i];
			}
			else{
				sum1 += (10*i)*v[i];
			}
		}
		int t2 = k;
		while(k){
			v2.push_back(t2%10);
			t2 /= 10;
		}
		for(int i=v2.size()-1;i>=0;i--){
			if(i==0){
				sum2 += v[i];
			}
			else{
				sum2 += (10*i)*v[i];
			}
		}

        cout << (sum1>sum2?sum1:sum2);
}
상수 

