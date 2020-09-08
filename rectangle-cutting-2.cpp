#include<bits/stdc++.h>
using namespace std; 

int dp[501][501];
const int maxi = 10000007;
int solve(int a, int b) {
	if(a == b) {
		return 0;
	}
	if(a == 1) {
		return b-1; 
	}
	if(b == 1) {
		return a-1;
	}
	
	if(dp[a][b] != maxi) {
		return dp[a][b];
	}

	int ans = maxi;
	for(int x = 1; x <= a/2; x++) {
		ans = min(ans, 1 + solve(a - x, b) + solve(x, b));
	}
	for(int x = 1; x <= b/2; x++) {
		ans = min(ans, 1 + solve(a, b - x) + solve(a, x));
	}

	dp[a][b] = ans;
	return ans;
}

int main() {
	int a, b; 
	cin >> a >> b; 
	for(int i = 0; i <= a; i++)
		for(int j = 0; j <= b; j++)
			dp[i][j] = maxi;

	cout << solve(a, b);
	return 0;
}	
