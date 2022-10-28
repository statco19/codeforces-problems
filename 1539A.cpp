#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define vt vector
#define ll long long
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define en '\n'
int T = 1;

vt<pii> v;

int bs(int l, int r, ll val) { // [l,r) -> [0,n)
	while(l+1 < r) {
		int mid = (l+r) / 2;

		if(v[mid].first == val) {
			return mid;
		} else if(v[mid].first > val) {
			r = mid;
		} else {
			l = mid;
		}
	}

	return r;
}

void sol() {
	ll n,x,t;
	ll ans = 0;
	cin >> n >> x >> t;

	ans = t/x;
	ll res = 0;
	if(ans >= n-1) {
		res = n*(n-1)/2;
	} else {
		res = ans*(n-(ans+1)) + ans*(ans+1)/2;
	}
	cout << res << '\n';

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