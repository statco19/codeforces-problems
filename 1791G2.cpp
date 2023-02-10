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


void sol() {
	int n;
	ll c;
	cin >> n >> c;
	vt<ll> v(n);
	for(int i=0; i<n; ++i) cin >> v[i];

	vt<pair<ll,ll>> a(n);
	for(int i=0; i<n; ++i) {
		a[i].first = min(v[i]+(i+1), v[i] + (n-i));
		a[i].second = v[i]+(i+1);
	}

	sort(all(a));
	vt<ll> psum(n+1);
	for(int i=1; i<=n; ++i) {
		psum[i] = a[i-1].first + psum[i-1];
	}

	int ans = 0;
	for(int i=1; i<=n; ++i) {
		ll nc = 0;

		if(a[i-1].second <= c) {
			nc = c - a[i-1].second;
			ans = max(ans, 1);
		} else {
			continue;
		}

		int l = 0, r = n;  // min: 1, max: n
		while(l+1<r) {
			int mid = (l+r)/2;

			ll price = 0;
			int cnt = 0;
			if(i <= mid) {
				price = psum[mid] - psum[i] + psum[i-1];
				cnt = mid;
			} else {
				price = psum[mid];
				cnt = mid+1;
			}

			if(price <= nc) {
				ans = max(ans, cnt);
				l = mid;
			} else {
				r = mid;
			}
		}

		if(i > 1 && l == 0 && r == 1) {
			if(psum[1] <= nc) {
				ans = max(ans, 2);
			}
		} else if(l == n-1 && r == n) {
			if(psum[n] - psum[i] + psum[i-1] <= nc) {
				ans = max(ans, n);
			}
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