#include<bits/stdc++.h>
using namespace std; 

int main() {
	int temp; 
	int n;
	cin >> n;
	long long a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	long long ans = a[0];
	long long curr_max = a[0];

	for(int i = 1; i < n; i++) {
		curr_max = max(a[i], curr_max + a[i]);
		ans = max(ans, curr_max);
	}

	cout << ans;

	return 0;
}