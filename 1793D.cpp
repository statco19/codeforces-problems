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
	cin >> n;
	vt<ll> pos_a(n+1), pos_b(n+1);

	int x;
	for(int i=0; i<n; ++i) {
		cin >> x;
		pos_a[x] = i+1;
	}
	for(int i=0; i<n; ++i) {
		cin >> x;
		pos_b[x] = i+1;
	}

	ll la = n, ra = 1, lb = n, rb = 1;
	ll ans = 0;
	for(int i=1; i<=n-1; ++i) {  // x : 1 ~ n-1 => MEX : 2 ~ n
		la = min(la, pos_a[i]);
		ra = max(ra, pos_a[i]);
		lb = min(lb, pos_b[i]);
		rb = max(rb, pos_b[i]);

		int min_la, max_ra, min_lb, max_rb;
		if(pos_a[i+1] < la) {
			min_la = pos_a[i+1] + 1;
			max_ra = n;
		} else {
			min_la = 1;
			max_ra = pos_a[i+1] - 1;
		}

		if(pos_b[i+1] < lb) {
			min_lb = pos_b[i+1] + 1;
			max_rb = n;
		} else {
			min_lb = 1;
			max_rb = pos_b[i+1] - 1;
		}

		ans += max(min(la,lb) - max(min_la, min_lb) + 1, 0LL) * max(min(max_ra, max_rb) - max(ra,rb) + 1, 0LL);
	}

	ans += (min(pos_a[1], pos_b[1]) - 1) * min(pos_a[1], pos_b[1]) / 2;
	ans += (n - max(pos_a[1], pos_b[1])) * (n - max(pos_a[1], pos_b[1]) + 1) / 2;
	ans += (abs(pos_a[1] - pos_b[1]) - 1) * (abs(pos_a[1] - pos_b[1])) / 2;
	ans++;

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