#include<bits/stdc++.h>
using namespace std; 
int main() {
	int n, q;
	cin >> n >> q; 
	long long arr[n+1];
	int query, a, b, k;
	long long u;
	int limit = (int) sqrt(n + 0.) + 1;
	vector<long long> box(limit + 1, 0);
	
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	while(q--) {
		cin >> query; 
		if(query == 1) {
			cin >> a >> b >> u;
			int leftBucket = (a - 1)/limit;
			int rightBucket = (b - 1)/limit; 

			if(leftBucket == rightBucket) {
				for(int i = a - 1; i <= b - 1; i++) {
					arr[i] += u;
				}
			} else {
				for(int i = a - 1; i <= leftBucket * limit + limit - 1; i++) {
					arr[i] += u;
				}

				for(int i = leftBucket + 1; i <= rightBucket - 1; i++) {
					box[i] += u;
				}

				for(int i = rightBucket * limit ; i <= b - 1; i++) {
					arr[i] += u;
				}
			}
		} else {
			cin >> k;
			cout << arr[k - 1] + box[(k-1)/limit] << "\n";
		}
	}
	return 0;
}