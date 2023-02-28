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
	ll n,m;
	cin >> n >> m;
	vt<ll> cnt(n+m+1);
	vt<ll> appear(n+m+1);
	fill(all(appear), -1);
	vt<ll> a(n+1);
	for(int i=1; i<=n; ++i) {
		cin >> a[i];
		appear[a[i]] = 0;
	}

	int p,v;
	for(int i=1; i<=m; ++i) {
		cin >> p >> v;
		cnt[a[p]] += i - appear[a[p]];
		appear[a[p]] = -1;
		a[p] = v;
		appear[v] = i;
	}

	ll ans = 0;
	for(int i=1; i<=n+m; ++i) {
		if(appear[i] != -1) {
			cnt[i] += (m+1) - appear[i];
		}
	}

	for(int i=1; i<=n+m; ++i) {
		if(cnt[i]) {
			ans += m*(m+1)/2 - (m-cnt[i])*(m-cnt[i]+1)/2;
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