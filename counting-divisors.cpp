#include<bits/stdc++.h> 
using namespace std; 

int factors(int x) {
	int count = 0; 
	for(int i = 1; i*i <= x; i++) {
		if(x%i == 0) {
			if(x == i*i) {
				count++;
			} else {
				count+=2;
			}
		}
	}
	return count;
}

int main() {
	int t, x; 
	cin >> t; 
	while(t--) {
		cin >> x; 
		cout << factors(x) << "\n";
	}
	return 0;
}