#include<bits/stdc++.h>
using namespace std; 

int main() {
	int n, q, a, b; 
	cin >> n >> q; 
	vector<long long> v(n+1);
	vector<long long> sum(n+1, 0);
	for(int i = 1; i <= n; i++) {
		cin >> v[i];
		sum[i] = sum[i-1] + v[i];
	}
	while(q--) {
		cin >> a >> b;
		cout << sum[b] - sum[a-1] << "\n";
	}
	return 0;
}