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
	vt<ll> a(n), b(n);
	for(auto& x : a) cin >> x;
	for(auto& x : b) cin >> x;

	vt<ll> psum(n+1), add(n+1), cnt(n+1);
	for(int i=0; i<n; ++i) psum[i+1] = psum[i] + b[i];
	for(int i=0; i<n; ++i) {
		int j = upper_bound(psum.begin(), psum.end(), a[i] + psum[i]) - psum.begin() - 1;
		cnt[i] += 1;
		cnt[j] -= 1;
		add[j] += a[i] - (psum[j] - psum[i]);
	}

	for(int i=0; i<n; ++i) {
		cout << cnt[i] * b[i] + add[i] << ' ';
		cnt[i+1] += cnt[i];
	}
	cout << en;

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