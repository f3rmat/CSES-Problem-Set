#include<bits/stdc++.h>
using namespace std; 

int main() {
	int n;
	cin >> n;
	int MOD = 1e9 + 7;
	char grid[1001][1001];
	int dp[1001][1001];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> grid[i][j];
		}
	}

	int flag = 1;
	for(int i = 0; i < n; i++) {
		if(grid[i][0] == '*')
			flag = 0;

		if(!flag)
			dp[i][0] = 0;
		else 
			dp[i][0] = 1;
	}

	flag = 1;
	for(int j = 0; j < n; j++) {
		if(grid[0][j] == '*')
			flag = 0;

		if(!flag)
			dp[0][j] = 0;
		else 
			dp[0][j] = 1;
	}

	for(int i = 1; i < n; i++) {
		for(int j = 1; j < n; j++) {
			if(grid[i][j] != '*') {
				dp[i][j] = (dp[i-1][j] + dp[i][j-1])%MOD;
			} else {
				dp[i][j] = 0;
			}
		}
	}

	cout << dp[n-1][n-1];

	return 0;
}