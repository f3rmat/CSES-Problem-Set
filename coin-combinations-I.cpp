#include<bits/stdc++.h> 
using namespace std; 
int main() {
	int n, x;
	int MOD = 1000000007;
	cin >> n >> x;
	int c[n];
	for(int i = 0; i < n; i++) 
		cin >> c[i];

	int dp[1000001];
	memset(dp, 0, sizeof(dp));
	for(int i = 0; i < n; i++) 
		dp[c[i]] = 1;

	for(int i = 1; i <= x; i++) {
		for(int j = 0; j < n; j++) {
			if(i - c[j] >= 1) {
				dp[i] = (dp[i] + dp[i-c[j]])%MOD;
			}
		}
	}
	cout << dp[x];
	return 0;
}
