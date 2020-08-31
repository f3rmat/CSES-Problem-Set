#include<bits/stdc++.h> 
using namespace std; 

int main() {
	long long n; 
	cin >> n;
	long long curr = 5; 
	int ans = 0;
	while(n >= curr) {
		ans = ans + n/curr;
		curr = 5*curr;
	}
	cout << ans;
	return 0;
}