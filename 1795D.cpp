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

const int mod = 998244353;

ll ModInv(int t) {
	int idx = mod-2;
	ll base = t, res = 1;
	while(idx) {
		if(idx & 1) res = (res * base) % mod;
		base = (base * base) % mod;
		idx >>= 1;
	}
	return res;
}

ll fac[100001];
ll fac_inv[50001];

void sol() {
	int n;
	cin >> n;
	fac[0] = 1;
	for(int i=1; i<=100000; ++i) {
		fac[i] = fac[i-1] * i % mod;
	}
	fac_inv[50000] = ModInv(fac[50000]);
	for(int i=50000; i>0; --i) {
		fac_inv[i-1] = fac_inv[i] * i % mod;
	}

	vt<int> w(n);
	for(auto& x : w) cin >> x;

	int m = n/3;  // 2<= m <=1e5
	int k = n/6;  // 1<= k <=5e4

	ll ans = (fac[m] * fac_inv[k] % mod) * fac_inv[k] % mod;
	for(int i=0; i<n; i+=3) {
		int a = w[i], b = w[i+1], c = w[i+2];
		vt<int> v = {a,b,c};
		sort(all(v), greater<int>());
		int mn = *min_element(all(v));
		int cnt = 0;
		for(int j=0; j<3; ++j) {
			if(v[j] == mn) cnt++;
		}
		ans = ans * cnt % mod;

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