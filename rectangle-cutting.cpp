#include<bits/stdc++.h>
using namespace std; 

int main() {
	int a, b; 
	cin >> a >> b; 
	const int limit = 501;

	int dp[limit][limit];

	for(int i = 0; i < limit; i++)
		for(int j = 0; j < limit; j++)
			dp[i][j] = 1e7;

	for(int i = 1; i < limit; i++) {
		dp[i][1] = i - 1;
		dp[1][i] = i - 1;
		dp[i][i] = 0;
	}
	
	for(int i = 1; i < limit; i++) {
		for(int j = 1; j < i; j++) {
			for(int k = 1; k <= i/2; k++) {
				dp[i][j] = min(dp[i][j], 1 + dp[k][j] + dp[i-k][j]);
				dp[j][i] = dp[i][j];
			} 
			for(int k = 1; k <= j/2; k++) {
				dp[i][j] = min(dp[i][j], 1 + dp[i][k] + dp[i][j-k]);
				dp[j][i] = dp[i][j];
			} 
		}	
	}

	cout << dp[a][b];
	return 0;
}	