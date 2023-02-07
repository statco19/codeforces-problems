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
#define en "\n"

const int d4r[4] = {-1,0,1,0}; const int d4c[4] = {0,1,0,-1};
const int d8r[8] = {-1,-1,0,1,1,1,0,-1}; const int d8c[8] = {0,1,1,1,0,-1,-1,-1};
const int INF = 0x3f3f3f3f; const int mINF = 0xc0c0c0c0;
const ll LINF = 0x3f3f3f3f3f3f3f3f; const ll mLINF = 0xc0c0c0c0c0c0c0c0;
int T = 1;

int t[200002];
int a[4][200001];
int n,q;

void update(int p, int val) {
	while(p<=n) {
		t[p] += val;
		p += p & -p;
	}
}

int qry(int p) {
	int res = 0;
	while(p>0) {
		res += t[p];
		p -= p & -p;
	}
	return res;
}

void sol() {
	mset(t,0);
	mset(a,0);
	cin >> n >> q;

	for(int i=1; i<=n; ++i) {
		cin >> a[0][i];
	}

	for(int i=1; i<4; ++i) {
		for(int j=1; j<=n; ++j) {
			int k = a[i-1][j];
			int sum = 0;
			while(k) {
				sum += k % 10;
				k /= 10;
			}

			a[i][j] = sum;
		}
	}

	int k,l,r,x;
	for(int i=0; i<q; ++i) {
		cin >> k;
		if(k == 1) {
			cin >> l >> r;
			update(l, 1);
			update(r+1, -1);
		} else {
			cin >> x;
			int idx = qry(x);
			if(idx >= 3) idx = 3;
			cout << a[idx][x] << en;
		}
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