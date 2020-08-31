#include<bits/stdc++.h> 
using namespace std; 

long long MOD = 1000000007;
long long fact[1000001];
long long inverseFact[1000001];

long long pow(long long x, long long y) {
	long long res = 1;
	while(y) {
		if(y%2) 
			res = (res*x)%MOD;
		x = (x*x)%MOD;
		y /= 2;
	}
	return res;
}

void precompute() {
	fact[0] = 1LL; 
	for(long long i = 1; i <= 1000000; i++) {
		fact[i] = (i*fact[i-1])%MOD;
	}

	inverseFact[0] = 1;

	for(int i = 1; i <= 1000000; i++) {
		inverseFact[i] = pow(fact[i], MOD-2);
	}
}

int main() {
	precompute();
	int n; 
	cin >> n;
	long long res = 0;
	for(int i = 0; i <= n; i++) {
		res = (i % 2 == 0) ? (res + (fact[n] * inverseFact[i])%MOD)%MOD : (res - (fact[n] * inverseFact[i])%MOD)%MOD;
	}

	cout << (res + MOD)%MOD; 
	return 0;
}