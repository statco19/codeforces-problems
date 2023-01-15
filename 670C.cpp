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

bool cmp(vt<int> &a, vt<int> &b) {
	if(a[0] > b[0]) return 1;
	else if(a[0] < b[0]) return 0;
	else {
		if(a[1] > b[1]) return 1;
		else if(a[1] < b[1]) return 0;
		else return a[2] <= b[2];
	}
}

void sol() {
	int n;
	cin >> n;
	umap<int,int> um;
	int x;
	for(int i=0; i<n; ++i) {
		cin >> x;
		um[x]++;
	}

	int m;
	cin >> m;
	vt<int> b(m), c(m);
	for(int i=0; i<m; ++i) {
		cin >> b[i];
	}
	for(int i=0; i<m; ++i) {
		cin >> c[i];
	}

	vt<vt<int>> v(m);
	for(int i=0; i<m; ++i) {
		v[i] = {um[b[i]], um[c[i]], i+1};
	}

	sort(all(v), cmp);
	cout << v[0][2] << en;

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	while(T--) {
		sol();
	}

	return 0;
}
