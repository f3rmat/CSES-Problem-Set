#include<bits/stdc++.h>
using namespace std; 
int n, q, l, m; 
long long t; 
long long as[200001];
long long tree[800004];

void build(int v, int start, int end) {
	if(start == end) {
		tree[v] = as[start];
	} else {
		int mid = (start + end) / 2; 
		build(2*v, start, mid);
		build(2*v + 1, mid + 1, end);
		tree[v] = tree[2*v] + tree[2*v + 1];
	}
}

long long solve(int v, int start, int end, int l, int r) {
	if(r < start || end < l) {
        return 0;
    }

    if(l <= start && end <= r) {
        return tree[v];
    }

    int mid = (start + end) / 2;
    return solve(2*v, start, mid, l, r) +  solve(2*v+1, mid + 1, end, l, r);
}

void update(int v, int start, int end, int idx, long long val)
{
    if(start == end) {
    	long long temp = as[idx];
        as[idx] = val;
        tree[v] = tree[v] - temp + val;
    } else {
        int mid = (start + end) / 2;
        if(start <= idx && idx <= mid) {
            update(2*v, start, mid, idx, val);
        }
        else {
            update(2*v+1, mid+1, end, idx, val);
        }
        tree[v] = tree[2*v] + tree[2*v + 1];
    }
}

int main() {
	cin >> n >> q; 
	for(int i = 0; i < n; i++)
		cin >> as[i];

	build(1, 0, n-1);

	while(q--) {
		cin >> l >> m >> t;
		if(l == 2)
			cout << solve(1, 0, n - 1, m - 1, t - 1) << "\n";
		else 
			update(1, 0, n - 1, m - 1, t);
	}
	return 0;
}