#include<bits/stdc++.h> 
using namespace std; 

int main() {
	int n; 
	cin >> n;
	if(n == 2 || n == 3) {
		cout << "NO SOLUTION";
		return 0;
	}

	if(n % 2 == 0) {
		cout << n/2 + 1 << " ";
		for(int i = 1; i < n/2; i++) {
			cout << i << " " << n + 1 - i << " ";
		}
		cout << n/2;
	} else {
		cout << (n+1)/2 << " ";
		for(int i = 1; i <= n/2; i++) {
			cout << i << " " << n + 1 - i << " ";
		}
	}
	return 0;
}