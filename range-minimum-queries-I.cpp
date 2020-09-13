#include<bits/stdc++.h>
using namespace std; 
int n, q, a, b; 
int as[200001];
int tree[800004];

void build(int v, int start, int end) {
	if(start == end) {
		tree[v] = as[start];
	} else {
		int mid = (start + end) / 2; 
		build(2*v, start, mid);
		build(2*v + 1, mid + 1, end);
		tree[v] = min(tree[2*v], tree[2*v + 1]);
	}
}

int solve(int v, int start, int end, int l, int r) {
	if(r < start || end < l) {
        return INT_MAX;
    }

    if(l <= start && end <= r) {
        return tree[v];
    }

    int mid = (start + end) / 2;
    return min(solve(2*v, start, mid, l, r), solve(2*v+1, mid + 1, end, l, r));
}

int main() {
	cin >> n >> q; 
	for(int i = 0; i < n; i++)
		cin >> as[i];

	build(1, 0, n-1);

	while(q--) {
		cin >> a >> b;
		cout << solve(1, 0, n - 1, a - 1, b - 1) << "\n";
	}
	return 0;
}