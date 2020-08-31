#include<bits/stdc++.h> 
using namespace std; 

int main() {
	int t; 
	cin >> t; 
	long long a, b; 
	while(t--) {
		cin >> a >> b;
		if((a == b && a % 3 == 0 && b % 3 == 0) || a == 2*b || b == 2*a) {
			cout << "YES\n";
			continue;
		}

		long long x = (2*a - b)/3;
		long long y = (2*b - a)/3;

		if(x >= 0 && y >= 0 && 2*x + y == a && x + 2*y == b) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}