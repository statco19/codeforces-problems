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
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define en '\n'

const int d4r[4] = {-1,0,1,0}; const int d4c[4] = {0,1,0,-1};
const int d8r[8] = {-1,-1,0,1,1,1,0,-1}; const int d8c[8] = {0,1,1,1,0,-1,-1,-1};
const int INF = 0x3f3f3f3f; const int mINF = 0xc0c0c0c0;
const ll LINF = 0x3f3f3f3f3f3f3f3f; const ll mLINF = 0xc0c0c0c0c0c0c0c0;
int T = 1;

void sol() {
	int n;
	cin >> n;
	vt<int> b(n);

	int pos = 0, neg = 0;
	for(int& x : b) {
		cin >> x;
		if(x > 0) pos++;
		else neg++;
	}

	int cnt = 1;
	for(int i=0; i<n-neg; ++i) cout << cnt++ << ' ';
	cnt--;
	for(int i=0; i<neg; ++i) cout << --cnt << ' ';
	cout << en;

	cnt = 1;
	for(int i=0; i<neg; ++i) cout << 1 << ' ' << 0 << ' ';
	for(int i=0; i<n-neg*2; ++i) cout << cnt++ << ' ';
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