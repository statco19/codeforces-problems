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


void sol() {
	int n;
	cin >> n;
	vt<int> v(n);

	int cnt = 0;
	for(int &x : v) {
		cin >> x;
		if(x == 2) cnt++;
	}

	if(cnt & 1) {
		cout << -1 << en;
		return;
	}
	if(cnt == 0) {
		cout << 1 << en;
		return;
	}

	int c = 0;
	for(int i=0; i<n-1; ++i) {
		if(v[i] == 2) {
			if(++c == cnt / 2) {
				cout << i+1 << en;
				return;
			}
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