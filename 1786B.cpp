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
#define mset(ar, val) memset(ar, val, sizeof(ar))
#define en "\n"

const int d4r[4] = {-1,0,1,0}; const int d4c[4] = {0,1,0,-1};
const int d8r[8] = {-1,-1,0,1,1,1,0,-1}; const int d8c[8] = {0,1,1,1,0,-1,-1,-1};
const int INF = 0x3f3f3f3f; const int mINF = 0xc0c0c0c0;
const ll LINF = 0x3f3f3f3f3f3f3f3f; const ll mLINF = 0xc0c0c0c0c0c0c0c0;
int T = 1;

void sol() {
	int n,w,h;
	cin >> n >> w >> h;

	vt<int> a(n), b(n);
	for(int &x : a) cin >> x;
	for(int &x : b) cin >> x;

	vt<pii> cake(n), choco(n);
	for(int i=0; i<n; ++i) {
		cake[i] = {a[i]-w, a[i]+w};
		choco[i] = {b[i]-h, b[i]+h};
	}

	if(choco[0].first <= cake[0].first) {
		int gap = cake[0].first - choco[0].first;

		for(int i=0; i<n; ++i) {
			cake[i].first -= gap;
			cake[i].second -= gap;
		}
	} else {
		int gap = choco[0].first - cake[0].first;

		for(int i=0; i<n; ++i) {
			choco[i].first -= gap;
			choco[i].second -= gap;
		}
	}

	int mxGap = 0;
	bool impossible = 0;
	for(int i=0; i<n; ++i) {
		if(cake[i].first <= choco[i].first && choco[i].second <= cake[i].second) {
			continue;
		} else if(choco[i].first < cake[i].first) {
			mxGap = max(mxGap, abs(cake[i].first - choco[i].first));
		} else if(cake[i].second < choco[i].second) {
			impossible = 1;
			break;
		}
	}

	if(impossible) {
		cout << "NO" << en;
		return;
	}

	impossible = 0;
	for(int i=0; i<n; ++i) {
		cake[i].first -= mxGap;
		cake[i].second -= mxGap;
	}

	for(int i=0; i<n; ++i) {
		if(cake[i].second < choco[i].second) {
			impossible = 1;
			break;
		}
	}

	if(impossible) {
		cout << "NO" << en;
	} else {
		cout << "YES" << en;
	}

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