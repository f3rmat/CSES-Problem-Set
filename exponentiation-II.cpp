#include<bits/stdc++.h>
using namespace std; 

long long pow(long long a, long long b, long long mod) {
	long long res = 1; 
	while(b) {
		if(b%2)
			res = (res*a)%mod;
		a = (a*a)%mod;
		b /=2;
	}
	return res;
}

int main() {
	int t; 
	cin >> t;
	long long a, b, c;
	while(t--) {
		cin >> a >> b >> c;
		long long MOD = 1000000007;	
		cout << pow(a, pow(b, c, MOD-1), MOD) << "\n";
	}
	return 0;
}