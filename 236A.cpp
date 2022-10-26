#include <bits/stdc++.h>
using namespace std;

#define vt vector
#define ll long long
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define en '\n'
int T = 1;

bool alpha[26];

void sol() {
	string s;
	cin >> s;
	for(int i=0;i<s.size();++i) {
		if(!alpha[s[i] - 'a']) {
			alpha[s[i] - 'a'] = 1;
		}
	}
	int sum = 0;
	for(auto x : alpha) {
		sum += x;
	}
	if(sum&1) {
		cout << "IGNORE HIM!" << en;
	} else {
		cout << "CHAT WITH HER!" << en;
	}

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	while(T--) {
		sol();
	}

	return 0;
}