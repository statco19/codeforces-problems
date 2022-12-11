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
#define sz(x) (int)(x).size()
#define en '\n'

const int d4r[4] = {-1,0,1,0}; const int d4c[4] = {0,1,0,-1};
const int d8r[8] = {-1,-1,0,1,1,1,0,-1}; const int d8c[8] = {0,1,1,1,0,-1,-1,-1};
const int INF = 0x3f3f3f3f; const int mINF = 0xc0c0c0c0;
const ll LINF = 0x3f3f3f3f3f3f3f3f; const ll mLINF = 0xc0c0c0c0c0c0c0c0;
int T = 1;

void sol() {
	int n;
	cin >> n;
	prq<pii> pq;

	int x;
	for(int i=1; i<=n; ++i) {
		cin >> x;
		pq.push({-x,i});
	}

	while(sz(pq) > 1) {
		pii p1 = pq.top(); pq.pop();
		pii p2 = pq.top(); pq.pop();

		if(-p1.first - 1 > 0) {
			pq.push({p1.first + 1, p1.second});
		}
		if(-p2.first - 1 > 0) {
			pq.push({p2.first + 1, p2.second});
		}
	}
	pii p = pq.top(); pq.pop();
	cout << p.second << en;

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