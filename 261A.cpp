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
#define en '\n'

const int d4r[4] = {-1,0,1,0}; const int d4c[4] = {0,1,0,-1};
const int d8r[8] = {-1,-1,0,1,1,1,0,-1}; const int d8c[8] = {0,1,1,1,0,-1,-1,-1};
const int INF = 0x3f3f3f3f; const int mINF = 0xc0c0c0c0;
const ll LINF = 0x3f3f3f3f3f3f3f3f; const ll mLINF = 0xc0c0c0c0c0c0c0c0;
int T = 1;

void sol() {
	int m;
	vt<int> q;
	int n;
	vt<int> a;

	cin >> m;
	q.resize(m);
	for(int i=0; i<m; ++i) cin >> q[i];

	cin >> n;
	a.resize(n);
	for(int i=0; i<n; ++i) cin >> a[i];

	sort(all(q));
	sort(rev(a));

	int ans = 0;

	int requiredItems = *min_element(all(q));
	int idx = 0, cnt = 0;

	while(idx < sz(a)) {
		ans += a[idx++];
		if(++cnt == requiredItems) {
			idx += 2;
			cnt = 0;
		}
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
