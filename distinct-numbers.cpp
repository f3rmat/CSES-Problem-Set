#include<bits/stdc++.h>
using namespace std; 

int main() {
	int n, temp;
	cin >> n;
	set<int> st;
	for(int i = 1; i <= n; i++) {
		cin >> temp;
		st.insert(temp);
	}
	cout << st.size();
	return 0;
}