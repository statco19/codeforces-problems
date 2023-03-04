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
#define sz(x) (int)((x).size())
#define mset(ar, val) memset(ar, val, sizeof(ar))
#define en '\n'

const int d4r[4] = {-1,0,1,0}; const int d4c[4] = {0,1,0,-1};
const int d8r[8] = {-1,-1,0,1,1,1,0,-1}; const int d8c[8] = {0,1,1,1,0,-1,-1,-1};
const int INF = 0x3f3f3f3f; const int mINF = 0xc0c0c0c0;
const ll LINF = 0x3f3f3f3f3f3f3f3f; const ll mLINF = 0xc0c0c0c0c0c0c0c0;
int T = 1;

int n;
vt<int> t;
vt<int> v;

void init() {
	for(int i=n-1; i>0; --i) {
		if(v[t[i<<1]] >= v[t[i<<1|1]]) {
			t[i] = t[i<<1];
		} else {
			t[i] = t[i<<1|1];
		}
	}
}

void update(int p, int val) {
	for(v[p]=val, p+=n; p>1; p>>=1) {
		if(v[t[p]] >= v[t[p^1]]) {
			t[p>>1] = t[p];
		} else {
			t[p>>1] = t[p^1];
		}
	}
}

int qry(int l, int r) {
	int res = mINF;
	int idx = -1;
	for(l+=n, r+=n; l<r; l>>=1, r>>=1) {
		if(l&1) {
			if(v[t[l]] > res) {
				res = v[t[l]];
				idx = t[l];
			}
			l++;
		}
		if(r&1) {
			--r;
			if(v[t[r]] > res) {
				res = v[t[r]];
				idx = t[r];
			}
		}
	}
	return idx;
}

void sol() {
	cin >> n;
	t = vt<int> ();
	v = vt<int> ();
	t.resize(2*n);
	v.resize(n);

	for(int i=0; i<n; ++i) {
		cin >> v[i];
		t[i+n] = i;
	}
	init();
	
	ll ans = 0;
	int l = -1, r = 0;
	while(r < n) {
		while(r<n && v[r] != 0) r++;

		while(r<n && v[r] == 0) {
			int idx = qry(l+1, r);
			if(idx != -1) {
				ans += v[idx];
				update(idx, 0);
			}
			r++;
		}
	}

	cout << ans << en;
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