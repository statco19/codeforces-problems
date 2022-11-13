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
	int n;
	vt<int> v;
	int mx = mINF;
	ll cnt = 0;
	cin >> n;
	v.resize(n);
	for(int i=0; i<n; ++i) {
		cin >> v[i];
	}
	sort(all(v));
	mx = v.back() - v.front();

	if(v[0] == v[n-1]) {
		cnt = (ll)n * (n-1) / 2;
	} else {
		int l = -1, r = sz(v);
		while(l<r) {
			l++;
			r--;
			if(l>=r) break;
			while(l+1<n && l+1<r && v[l] == v[l+1]) {
				l++;
			}
			while(r-1>=0 && r-1>l && v[r] == v[r-1]) {
				r--;
			}
	 
			if(v[r] - v[l] == mx) {
				cnt += (ll)(n-r) * (ll)(l+1);
			} else {
				break;
			}
		}
	}
 
	cout << mx << ' ' << cnt << en;
 
	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	while(T--) {
		sol();
	}

	return 0;
}