#include<bits/stdc++.h>
using namespace std; 

int a[1000001];

void solve(int x) {
	for(int i = 1; i * i <= x; i++) {
		if(x % i == 0) {
			a[i]++;
			a[x/i]++;
		}
	}
}

int main() {
	int n, temp; 
	cin >> n;
	memset(a, 0, sizeof(a));

	for(int i = 1; i <= n; i++) {
		cin >> temp;
		solve(temp);
	} 	

	int ans = -1; 
	for(int i = 1; i < 1000001; i++) {
		 if(a[i] > 1) {
		 	ans = max(ans, i);
		 }
	}

	cout << ans;
	return 0;
}	