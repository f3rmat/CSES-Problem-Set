#include<bits/stdc++.h> 
using namespace std; 

long long MOD = 1000000007;

long long pow(long long x, long long y) {
	long long res = 1LL; 
	while(y) {
		if(y % 2)
			res = (res * x)%MOD;
		x = (x * x)%MOD;
		y /= 2;
	}
	return res;
}

int main() {
	long long n; 
	cin >> n;
	cout << pow(2*1LL, n);
	return 0;
}