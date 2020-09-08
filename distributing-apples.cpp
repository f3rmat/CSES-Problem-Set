#include<bits/stdc++.h>
using namespace std; 

const long long MOD = 1e9 + 7;
const int limit = 2000005;
long long r, n; 
long long fact[limit];
long long ifact[limit];

long long pow(long long x, long long y) {
	long long res = 1LL; 
	while(y) {
		if(y % 2)
			res = (res * x)%MOD;
		x = (x*x)%MOD;
		y /= 2;
	}
	return res;
}

void solve() {
	fact[0] = 1; 
	for(int i = 1; i < limit; i++) {
		fact[i] = (i * fact[i-1])%MOD;
	}
	ifact[0] = 1; 
	for(int i = 1; i < limit; i++) {
		ifact[i] = pow(fact[i], MOD - 2);
	}
}

int main() {
	cin >> r >> n; 
	if(n + r - 1 < r - 1) {
		cout << 0; 
		return 0;
	}
	solve(); 
	cout << ((fact[n + r - 1] * ifact[n])%MOD * ifact[r - 1])%MOD;
	return 0;
}