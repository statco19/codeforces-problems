#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define vt vector
#define ll long long
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define en '\n'

const int d4r[4] = {-1,0,1,0}; const int d4c[4] = {0,1,0,-1};
const int d8r[8] = {-1,-1,0,1,1,1,0,-1}; const int d8c[8] = {0,1,1,1,0,-1,-1,-1};
const int INF = 0x3f3f3f3f; const int mINF = 0xc0c0c0c0;
const ll LINF = 0x3f3f3f3f3f3f3f3f; const ll mLINF = 0xc0c0c0c0c0c0c0c0;
int T = 1;

void sol() {
	string s,t;
	cin >> s;
	cin >> t;
	for(int i=0; i<sz(s); ++i) {
		if(65<=s[i]&&s[i]<=90) {
			s[i] = s[i] + 32;
		}
		if(65<=t[i] && t[i]<=90) {
			t[i] = t[i] + 32;
		}
	}

	for(int i=0; i<sz(s); ++i) {
		if(s[i] < t[i]) {
			cout << -1 << en;
			return;
		} else if(s[i] > t[i]) {
			cout << 1 << en;
			return;
		}
	}
	cout << 0 << en;

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	while(T--) {
		sol();
	}

	return 0;
}