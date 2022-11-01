#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define vt vector
#define ll long long
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define en '\n'

const int d4r[4] = {-1,0,1,0}; const int d4c[4] = {0,1,0,-1};
const int d8r[8] = {-1,-1,0,1,1,1,0,-1}; const int d8c[8] = {0,1,1,1,0,-1,-1,-1};
const int INF = 0x3f3f3f3f; const int mINF = 0xc0c0c0c0;
const ll LINF = 0x3f3f3f3f3f3f3f3f; const ll mLINF = 0xc0c0c0c0c0c0c0c0;
int T = 1;

int n;
int ans = 1;
int root;
vt<int> adj[2001];
vt<bool> hasParent(2001), hasChild(2001);

int bfs(int st) {
	int cnt = 0;
	queue<int> q;
	q.push(st);
	while(!q.empty()) {
		int size = q.size();
		for(int i=0; i<size; ++i) {
			int node = q.front(); q.pop();

			for(int j=0; j<sz(adj[node]); ++j) {
				q.push(adj[node][j]);
			}
		}
		cnt++;
	}

	return cnt;
}

void sol() {
	cin >> n;
	int manager;
	int st = 0;
	for(int i=1; i<=n; ++i) {
		cin >> manager;
		if(manager == -1) {
			continue;
		}
		
		adj[manager].pb(i);
		hasParent[i] = 1;
		hasChild[manager] = 1;
	}

	for(int i=1; i<=n; ++i) {
		if(!hasParent[i] && hasChild[i]) {
			ans = max(ans, bfs(i));
		}
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