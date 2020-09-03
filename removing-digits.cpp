#include<bits/stdc++.h>
using namespace std; 

int getMaxDigit(int n) {
	int val = n;
	int maxi = -1; 
	while(val) {
		maxi = max(val%10, maxi);
		val /= 10;
	}
	return maxi;
}

int main() {
	int n;
	cin >> n;
	int ans = 0; 
	while(n) {
		n = n - getMaxDigit(n);
		ans++;
	}
	cout << ans;
	return 0;
}