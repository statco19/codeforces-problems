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
	int n;
	cin >> n;
	vt<int> v(n);
	for(int &x : v) cin >> x;
	sort(all(v));

	priority_queue<int, vt<int>, greater<int>> pq;
	for(int x : v)
		pq.push(x);

	int ans = 0;
	while(pq.size() >= 2) {
		int a = pq.top(); pq.pop();
		int b = pq.top(); pq.pop();

		int x = min(a,b);
		if(ans + x > n) {
			pq.push(a);
			pq.push(b);
			break;
		} else {
			if(x < 2) {
				ans += x;
				if(a - x > 0) pq.push(a-x);
				if(b - x > 0) pq.push(b-x);
			} else {
				ans += 2;
			}
		}
	}

	if(pq.size()) {
		ans += pq.size();
		ans = min(ans, n);
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
