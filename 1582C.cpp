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
	int n;
	string s;
	cin >> n >> s;

	int ans = INF;
	for(int i='a'; i<='z'; ++i) {
		int change = 0;
		int l=0, r=n-1;
		while(l<=r) {
			if(s[l] != s[r]) {
				if(s[l] == i) {
					change++;
					l++;
				} else if(s[r] == i) {
					change++;
					r--;
				} else {
					change = INF;
					break;
				}
			} else {
				l++;
				r--;
			}
		}

		ans = min(ans, change);
	}

	if(ans == INF) cout << -1 << en;
	else cout << ans << en;

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