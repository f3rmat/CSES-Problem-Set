#include<bits/stdc++.h>
using namespace std; 
int main() {
	int n, q; 
	char c;
	int y1, x1, y2, x2;
	cin >> n >> q; 
	vector<vector<int>> v(n + 1, vector<int>(n + 1, 0));
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			cin >> c; 
			if(c == '*')
				v[i][j] = 1;
		}
	}

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			v[i][j] += (v[i - 1][j] + v[i][j - 1] - v[i - 1][j - 1]);
		}
	}

	while(q--) {
		cin >> y1 >> x1 >> y2 >> x2; 
		cout << v[y2][x2] - v[y1 - 1][x2] - v[y2][x1 - 1] + v[y1 - 1][x1 - 1] << "\n";
	}
	return 0;
}