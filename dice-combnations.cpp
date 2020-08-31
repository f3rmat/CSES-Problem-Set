#include<bits/stdc++.h> 
using namespace std; 

long long MOD = 1000000007;

int main() {
	int n;
	cin >> n;
	int dp[n+1];
	memset(dp, 0, sizeof(dp));
	for(int i = 1; i <= min(n, 6); i++)
		dp[i] = 1;
	for(int i = 2; i <= n; i++) {
		for(int j = 1; j <= 6; j++) {
			if(i - j >= 1) {
				dp[i] = (dp[i] + dp[i-j])%MOD;
			}
		}
	}
	cout << dp[n];
	return 0;
}