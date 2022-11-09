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
	bool at = 0;
	string s;
	string ans = "";
	cin >> s;
	for(int i=0; i<sz(s); ++i) {
		bool skip = 0;
		if(i > 0 && s[i] == 'd') {
			if(i+2 < sz(s)-1) {
				if(s[i+1] == 'o' && s[i+2] == 't') {
					ans += '.';
					i += 2;
					skip = 1;
				}
			}
		} else if(i > 0 && s[i] == 'a' && !at) {
			if(i+1 < sz(s)-1) {
				if(s[i+1] == 't') {
					ans += '@';
					at = 1;
					i++;
					skip = 1;
				}
			}
		}

		if(!skip) ans += s[i];
	}
	cout << ans << en;

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	while(T--) {
		sol();
	}

	return 0;
}