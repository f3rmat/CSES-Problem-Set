#include<bits/stdc++.h>
using namespace std; 

int main() {
	int n, x; 
	cin >> n >> x; 
	map<int, vector<int>> mp;
	vector<int> v(n);
	for(int i = 0; i < n; i++) {
		cin >> v[i];
		mp[v[i]].push_back(i);
	}

	for(int i = 0; i < n; i++) {
		if(x == 2*v[i]) {
			if(mp[v[i]].size() > 1) {
				cout << mp[v[i]][0] + 1 << " " << mp[v[i]][1] + 1;
				return 0;
			}
		} else if(x-v[i] > 0 && mp[x-v[i]].size() > 0) {
			cout <<  i + 1 << " " << mp[x - v[i]][0] + 1;
			return 0;
		}
	}

	cout << "IMPOSSIBLE";

	return 0;
}