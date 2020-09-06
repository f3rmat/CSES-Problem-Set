#include<bits/stdc++.h>
using namespace std; 

int main() {
	int n;
	cin >> n;
	long long a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	stack<long long> s; 
	for(int i = 0; i < n; i++) {
		if(s.empty()) {
			cout << "0 ";
			s.push(i + 1);
		} else {
			while(!s.empty() && a[s.top() - 1] >= a[i]) {
				s.pop();
			}

			if(s.empty()) {
				cout << "0 ";
			} else {
				cout << s.top() << " ";
			}
			s.push(i + 1);
		}
	}

	return 0;
}