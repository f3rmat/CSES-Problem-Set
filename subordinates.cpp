#include<bits/stdc++.h>
using namespace std; 

vector<int> p[200001];
int sum[200001];

int solve(int x) {
	int val = 0;
	for(auto it = p[x].begin(); it != p[x].end(); it++) {
		val += solve(*it);
	}
	sum[x] = val;
	return val + 1;
}

int main() {
	int temp; 
	int n;
	cin >> n;
	for(int i = 2; i <= n; i++) {
		cin >> temp;
		p[temp].push_back(i);
	}
	memset(sum, 0, sizeof(sum));
	solve(1);
	for(int i = 1; i <= n; i++) {
		cout << sum[i] << " ";
	}
	return 0;
}