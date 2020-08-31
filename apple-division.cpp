#include<bits/stdc++.h> 
using namespace std; 

int main() {
	int n; 
	cin >> n;
	long long a[21];
	long long total_sum = 0;
	long long ans = INT_MAX;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		total_sum += a[i];
	}

	for(int i = 0; i < ((1 << n) - 1); i++) {
		long long sum = 0;
		for(int j = 0; j < n; j++) {
			if(i & (1 << j)) {
				sum+=a[j];
			}
		}
		ans = min(ans, abs(total_sum - 2*sum));
	}

	cout << ans;

	return 0;
}