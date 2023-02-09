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

int pos(umap<int,int> &um, int x) {
	return um.find(x)->second;
}

void sol() {
	int n,m,d;
	cin >> n >> m >> d;
	vt<int> p(n), a(m);
	umap<int,int> um;
	for(int &x : p) cin >> x;
	for(int &x : a) cin >> x;

	for(int i=0; i<n; ++i) {
		um.ioa(p[i], i+1);
	}

	int ans = INF;
	for(int i=0; i<m-1; ++i) {
		if(pos(um, a[i]) < pos(um, a[i+1]) && pos(um, a[i+1]) <= pos(um, a[i]) + d) {
			ans = min(ans, pos(um, a[i+1]) - pos(um, a[i]));
			int y;
			if((n - pos(um, a[i+1])) + (pos(um, a[i]) - 1) >= pos(um, a[i]) + d - pos(um, a[i+1]) + 1) {
				ans = min(ans, pos(um, a[i]) + d - pos(um, a[i+1]) + 1);
			}
		} else {
			cout << 0 << en;
			return;
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