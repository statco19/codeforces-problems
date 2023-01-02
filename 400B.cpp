#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define vt vector
#define ll long long
#define pb push_back
#define ioa insert_or_assign
#define umap unordered_map
#define prq priority_queue
#define F first
#define S second
#define all(c) (c).begin(), (c).end()
#define rev(c) (c).rbegin(), (c).rend()
#define sz(x) (int)(x).size()
#define mset(ar, val) memset(ar, val, sizeof(ar))
#define en '\n'

const int d4r[4] = {-1,0,1,0}; const int d4c[4] = {0,1,0,-1};
const int d8r[8] = {-1,-1,0,1,1,1,0,-1}; const int d8c[8] = {0,1,1,1,0,-1,-1,-1};
const int INF = 0x3f3f3f3f; const int mINF = 0xc0c0c0c0;
const ll LINF = 0x3f3f3f3f3f3f3f3f; const ll mLINF = 0xc0c0c0c0c0c0c0c0;
int T = 1;


void sol() {
	int n,m;
	cin >> n >> m;
	vt<pii> v(n+1);
	char bd[1001][1001];
	string t;
	for(int i=1; i<=n; ++i) {
		cin >> t;
		int g=1, s=2;
		for(int j=1; j<=m; ++j) {
			bd[i][j] = t[j-1];
			if(bd[i][j] == 'G') g = j;
			else if(bd[i][j] == 'S') s = j;
		}
		v[i] = {g,s};
	}

	set<int> S;
	for(int i=1; i<sz(v); ++i) {
		pii p = v[i];
		if(p.S - p.F < 0) {
			cout << -1 << en;
			return;
		}
		S.insert(p.S - p.F);
	}
	cout << sz(S) << en;

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	while(T--) {
		sol();
	}

	return 0;
}
