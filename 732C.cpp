#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define vt vector
#define ll long long
#define pb push_back
#define ioa insert_or_assign
#define umap unordered_map
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define en '\n'

const int d4r[4] = {-1,0,1,0}; const int d4c[4] = {0,1,0,-1};
const int d8r[8] = {-1,-1,0,1,1,1,0,-1}; const int d8c[8] = {0,1,1,1,0,-1,-1,-1};
const int INF = 0x3f3f3f3f; const int mINF = 0xc0c0c0c0;
const ll LINF = 0x3f3f3f3f3f3f3f3f; const ll mLINF = 0xc0c0c0c0c0c0c0c0;
int T = 1;

void sol() {
	ll b,d,s;
	cin >> b >> d >> s;
	vt<ll> v = {b,d,s};
	ll ans = 0;

	ll mx = *max_element(all(v));
	int cnt = 0;
	for(int i=0; i<sz(v); ++i) {
		if(v[i] == mx) cnt++;
	}

	if(cnt == 1) {
		if(mx == b) {
			ans = abs((d-b+1) + (s-b+1));
		}
		else if(mx == d) {
			ans = abs((b-d+1) + (s-d+1));
		}
		else {
			ans = abs((b-s+1) + (d-s+1));
		}
	}
	else if(cnt == 2) {
		ll mn = *min_element(all(v));
		ans = mx - mn - 1;
	}
	else if(cnt == 3) {
		ans = 0;
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