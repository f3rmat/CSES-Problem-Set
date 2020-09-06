#include<bits/stdc++.h>
using namespace std; 

int main() {
	int n;
	cin >> n;
	long long a[n];
	map<int, int> mp;
	long long modulo = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		modulo = (modulo + a[i])%n;
		if(modulo < 0) {
			modulo = (modulo + n)%n;
		}
		mp[modulo]++;
	}

	long long ans = mp[0];
	for(auto it = mp.begin(); it != mp.end(); it++) {
		long long count = (*it).second; 
		ans += (count*(count-1))/2;
	}

	cout << ans;

	return 0;
}