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
#define en '\n'

const int d4r[4] = {-1,0,1,0}; const int d4c[4] = {0,1,0,-1};
const int d8r[8] = {-1,-1,0,1,1,1,0,-1}; const int d8c[8] = {0,1,1,1,0,-1,-1,-1};
const int INF = 0x3f3f3f3f; const int mINF = 0xc0c0c0c0;
const ll LINF = 0x3f3f3f3f3f3f3f3f; const ll mLINF = 0xc0c0c0c0c0c0c0c0;
int T = 1;


void sol() {
	int n,m;
	int ans = 0;
	bool vis[10001];
	mset(vis,0);
	cin >> n >> m;

	queue<int> q;
	q.push(n);
	vis[n] = 1;

	while(!q.empty()) {
		int size = sz(q);
		for(int i=0; i<size; ++i) {
			int x = q.front(); q.pop();
			if(x == m) {
				cout << ans << en;
				return;
			}

			if(1<=x-1 && x-1<=10000 && !vis[x-1]) {
				vis[x-1] = 1;
				q.push(x-1);
			}
			if(1<=x*2 && x*2<=10000 && !vis[x*2]) {
				vis[x*2] = 1;
				q.push(x*2);
			}
		}
		ans++;
	}

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	while(T--) {
		sol();
	}

	return 0;
}
