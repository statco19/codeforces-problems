#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define vt vector
#define ll long long
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define en '\n'
int T = 1;


void sol() {
	int n;
	string s;
	cin >> n >> s;

	stack<char> st;
	for(int i=0; i<sz(s); ++i) {
		if(!st.empty()) {
			if(s[i] == 'A') st.pop();
		}
		if(s[i] == 'Q') st.push(s[i]);
	}
	if(!st.empty()) cout << "NO" << en;
	else cout << "YES" << en;

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> T;
	while(T--) {
		sol();
	}

	return 0;
}