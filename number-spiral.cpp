#include<bits/stdc++.h> 
using namespace std; 

int main() {
	long long t, y, x;
	cin >> t; 
	while(t--) {
		cin >> y >> x;
		if(y >= x) {
			if(y % 2) {
				cout << (y - 1)*(y - 1) + x;
			} else {
				cout << y*y - x + 1;
			}
		} else {
			if(x % 2) {
				cout << x*x - y + 1;
			} else {
				cout << (x - 1)*(x - 1) + y;
			}
		}
		cout << "\n";
	}
	return 0;
}