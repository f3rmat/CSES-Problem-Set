#include<bits/stdc++.h> 
using namespace std; 

int main() {
	int n; 
	cin >> n;
	long long ans = 0, old, curr;
	cin >> old;
	for(int i = 2; i <= n; i++) {
		cin >> curr; 
		if(curr < old) {
			ans += (old - curr);
			curr = old;
		}
		old = curr;
	}
	cout << ans;
	return 0;
}