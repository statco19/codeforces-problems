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
#define mid (st+end)/2

const int d4r[4] = {-1,0,1,0}; const int d4c[4] = {0,1,0,-1};
const int d8r[8] = {-1,-1,0,1,1,1,0,-1}; const int d8c[8] = {0,1,1,1,0,-1,-1,-1};
const int INF = 0x3f3f3f3f; const int mINF = 0xc0c0c0c0;
const ll LINF = 0x3f3f3f3f3f3f3f3f; const ll mLINF = 0xc0c0c0c0c0c0c0c0;
int T = 1;

void sol() {
	int n;
	cin >> n;
	vt<vt<int>> ar;
	vt<int> f,lt;
	bool increasing[100001];
	mset(increasing,0);

	ll ans = 0;
	for(int i=0; i<n; ++i) {
		int l;
		cin >> l;
		vt<int> v(l);

		int x;
		for(int j=0; j<l; ++j) {
			cin >> x;
			v[j] = x;
			if(j >= 1 && x > v[j-1]) {
				increasing[i] = 1;
			}
		}

		if(!increasing[i]) {
			f.pb(v[0]);
			lt.pb(v[sz(v)-1]);
		}
	}

	sort(all(f));
	for(int i=0; i<sz(lt); ++i) {
		ans += (upper_bound(all(f), lt[i]) - f.begin());
	}
	cout << (ll)pow(n,2) - ans << en;

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	while(T--) {
		sol();
	}

	return 0;
}
