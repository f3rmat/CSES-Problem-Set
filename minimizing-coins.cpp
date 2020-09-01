#include<bits/stdc++.h>
using namespace std; 

int main() {
	int n, x; 
	cin >> n >> x;
	vector<int> c(n);
	vector<int> dp(1000001, INT_MAX);
	for(int i = 0; i < n; i++) {
		cin >> c[i];
		dp[c[i]] = 1;
	}
	dp[0] = 1;
	for(int i = 1; i <= x; i++) {
		for(int j = 0; j < n; j++) {
			if(i - c[j] >= 0 && dp[i-c[j]] != INT_MAX) {
				dp[i] = min(dp[i], dp[i-c[j]] + 1);
			}
		}
	}
	if(dp[x] == INT_MAX) {
		cout << "-1";
	} else {
		cout << dp[x];
	}
	return 0;
}