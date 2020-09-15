#include<bits/stdc++.h> 
using namespace std; 

int main() {
	map<int, int> mp;
	int n, target, val; 
	cin >> n >> target; 
	vector<int> v(n + 1); 
	for(int i = 0; i < n; i++) {
		scanf("%d", &val);
		mp[val] = i;
		v[i] = val;
	}

	for(int i = 0; i < n - 1; i++) {
		int vali = v[i];
		for(int j = i + 1; j < n; j++) {
			int x = target - vali - v[j];
			if(mp.find(x) != mp.end()) {
				if(mp[x] == i || mp[x] == j)
					continue;
				cout << mp[x] + 1 << " " << i + 1 << " " << j + 1;
				return 0;
			}
		}
	}

	cout << "IMPOSSIBLE";
	return 0;
}