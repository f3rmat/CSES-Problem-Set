#include<bits/stdc++.h>
using namespace std; 

int main() {
	int n;
	long long x;
	cin >> n >> x;
	long long a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	map<long long, int> mp;

	long long curr_sum = 0; 
	long long ans = 0;

	for(int i = 0; i < n; i++) {
		curr_sum += a[i];

		if(curr_sum == x)
			ans++;

		if(mp.find(curr_sum - x) != mp.end()) {
			ans += mp[curr_sum - x];
		}

		mp[curr_sum]++;
	}

	cout << ans;

	return 0;
}