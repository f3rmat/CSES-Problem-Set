#include<bits/stdc++.h> 
using namespace std; 

int main() {
	string s; 
	cin >> s;
	int max_ans = 1;
	int current = 1;
	for(int i = 1; i < s.length(); i++) {
		if(s[i] == s[i-1])
			current++;
		else {
			max_ans = max(current, max_ans);
			current = 1;
		}
	}
	max_ans = max(current, max_ans);
	cout << max_ans;
	return 0;
}