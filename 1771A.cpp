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
	int n;
	cin >> n;
	vt<int> v(n);
	for(int &x : v) cin >> x;
	sort(all(v));
	int l = 0, r = sz(v)-1;
	int mx = v[r] - v[l];
	
	vt<vt<int>> g;
	vt<int> tmp = {v[0]};
	for(int i=1; i<n; ++i) {
		if(v[i] == v[i-1]) {
			tmp.pb(v[i]);
		} else {
			g.pb(tmp);
			tmp = {v[i]};
		}
	}

	if(sz(tmp)) g.pb(tmp);

	if(sz(g) <= 1) {
		ll size = sz(g.back());
		cout << size*(size-1) << en;
	} else {
		ll sl = sz(g.front()), sr = sz(g.back());
		cout << sl*sr*2 << en;
	}

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