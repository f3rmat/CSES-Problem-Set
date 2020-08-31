#include<bits/stdc++.h> 
using namespace std; 

long long MOD = 1000000007;

long long pow(long long a, long long b) {
	long long res = 1; 
	while(b) {
		if(b%2)
			res = (res*a)%MOD;
		a = (a*a)%MOD;
		b /= 2;
	}
	return res;
}

int main() {
	long long a, b;
	int t; 
	cin >> t; 
	while(t--) {
		cin >> a >> b;
		cout << pow(a, b) << "\n";
	}
	return 0;
}