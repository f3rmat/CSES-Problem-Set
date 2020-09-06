#include<bits/stdc++.h>
using namespace std; 

long long calculateDiff(long long* a, long long median, int n) {
	long long ans = 0; 
	for(int i = 0; i < n; i++) { 
		ans += abs(median - a[i]);
	}
    return ans;
}

int main() {
	int n;
	cin >> n;
	long long a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a+n);
	if(n%2 == 0) {
		cout << min(calculateDiff(a, a[n/2], n), calculateDiff(a, a[n/2 - 1], n));
	} else {
		cout << calculateDiff(a, a[n/2], n);
	}


	return 0;
}