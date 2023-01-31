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
	vt<queue<int>> v;
	int n;
	cin >> n;
	for(int i=0; i<n; ++i) {
		queue<int> q;
		int x;
		for(int j=0; j<n-1; ++j) {
			cin >> x;
			q.push(x);
		}
		v.pb(q);
	}

	vt<int> ans;
	int N = n;
	while(N-- > 1) {
		int x = v[0].front();
		int idx = 0;
		for(int i=1; i<n; ++i) {
			if(x ^ v[i].front()) {
				if(i == 1) {
					if(v[1].front() ^ v[2].front()) {
						idx = 1;
					} else {
						idx = 0;
					}
					break;
				} else {
					idx = i;
					break;
				}
			}
		}

		int num = -1;
		for(int i=0; i<n; ++i) {
			if(i != idx) {
				if(num == -1) num = v[i].front();
				v[i].pop();
			}
		}
		ans.pb(num);
	}

	for(int i=0; i<n; ++i) {
		if(v[i].size()) {
			ans.pb(v[i].front());
			break;
		}
	}

	for(int x : ans) cout << x << " ";
	cout << en;

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
