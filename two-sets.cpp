#include<bits/stdc++.h> 
using namespace std; 

int main() {
	int n; 
	cin >> n;
	if(n % 4 == 1 || n % 4 == 2) {
		cout << "NO";
		return 0;
	}

	if(n%4 == 0) {
		cout << "YES\n";
		cout << n/2 << "\n";
		for(int i = 1; i <= n/4; i++) {
			cout << i << " " << n + 1 - i << " ";
		}
		cout << "\n";
		cout << n/2 << "\n";
		for(int i = n/4 + 1; i <= n/2; i++) {
			cout << i << " " << n + 1 - i << " ";
		}
	} else {
		cout << "YES\n";
		cout << (n+1)/2 << "\n";
		int k = (n-3)/4;
		int count = 0; 
		while(count < k+1) {
			cout << count+1 << " ";
			count++;
		}
		cout << (n+1)/2 << " ";

		count = k;
		while(count) {
			cout << n-count+1 << " ";
			count--;
		}

		cout << "\n";

		cout << n/2 << "\n";

		for(int i = k+2; i < (n+1)/2; i++) {
			cout << i << " ";
		}

		for(int i = (n+1)/2 + 1; i <= n - k; i++) {
			cout << i << " ";
		}
	}
	return 0;
}