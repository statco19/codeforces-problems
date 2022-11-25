#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define vt vector
#define ll long long
#define pb push_back
#define ioa insert_or_assign
#define umap unordered_map
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define en '\n'

const int d4r[4] = {-1,0,1,0}; const int d4c[4] = {0,1,0,-1};
const int d8r[8] = {-1,-1,0,1,1,1,0,-1}; const int d8c[8] = {0,1,1,1,0,-1,-1,-1};
const int INF = 0x3f3f3f3f; const int mINF = 0xc0c0c0c0;
const ll LINF = 0x3f3f3f3f3f3f3f3f; const ll mLINF = 0xc0c0c0c0c0c0c0c0;
int T = 1;

string s;
int m;
int l,r,prev;
vt<int> ans;
vt<int> w;

bool dfs(int m, int prev, int turn) {
	if(m == 0) {
		return true;
	}

	if(turn == 0) {  // left
		for(int i=0; i<sz(w); ++i) {
			if(w[i] != prev && l+w[i] > r) {
				ans.pb(w[i]);
				l += w[i];
				if(dfs(m-1, w[i], turn^1)) return true;
				l -= w[i];
				ans.pop_back();
			}
		}
	}
	else {
		for(int i=0; i<sz(w); ++i) {
			if(w[i] != prev && r+w[i] > l) {
				ans.pb(w[i]);
				r += w[i];
				if(dfs(m-1, w[i], turn^1)) return true;
				r -= w[i];
				ans.pop_back();
			}
		}
	}

	return false;
}

void sol() {
	cin >> s;
	cin >> m;

	for(int i=0; i<10; ++i) {
		if(s[i] == '1') w.pb(i+1);
	}

	if(dfs(m,0,0)) {
		cout << "YES" << en;
		for(int i=0; i<sz(ans); ++i) {
			cout << ans[i] << ' ';
		}
		cout << en;
	} else {
		cout << "NO" << en;
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