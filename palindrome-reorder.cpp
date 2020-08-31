#include<bits/stdc++.h> 
using namespace std; 

int main() {
	string s; 
	cin >> s; 
	int mp[26]; 
	memset(mp, 0, sizeof(mp));
	string ans = s;
	for(int i = 0; i < s.length(); i++) {
		mp[s[i]-'A']++;
	}

	int oddcount = 0;
	int marked = -1;
	for(int i = 0; i < 26; i++) {
		if(mp[i]%2) {
			marked = i;
			oddcount++;
		}
	}

	if((s.length() % 2 == 0 && oddcount > 0) || (s.length() % 2 == 1 && oddcount != 1)) {
		cout << "NO SOLUTION";
		return 0;
	}

	int start = 0; 
	int end = s.length() - 1;
	for(int i = 0; i < 26; i++) {
		if(marked != i) {
			int curr = mp[i];
			while(curr) {
				ans[start] = (char)(65 + i);
				ans[end] = (char)(65 + i);
				curr -= 2;
				start++;
				end--;
			}
		}
	}

	if(marked != -1) {
		int curr = mp[marked];
		while(curr) {
			if(curr == 1) {
				ans[start] = (char)(65 + marked);
				break;
			}
			ans[start] = (char)(65 + marked);
			ans[end] = (char)(65 + marked);
			curr -= 2;
			start++;
			end--;
		}
	}

	cout << ans;

	return 0;
}