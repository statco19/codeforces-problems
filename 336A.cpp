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
	int x, y;
	cin >> x >> y;

	int x1=0,x2=0,y1=0,y2=0;

	if(x<0 && y<0) {
		x1 = -(abs(x) + abs(y));
		y2 = -(abs(x) + abs(y));
	} else if(x<0) {
		x1 = -(abs(x) + y);
		y2 = abs(x) + y;
	} else if(y<0) {
		y1 = -(x + abs(y));
		x2 = x + abs(y);
	} else {
		y1 = x+y;
		x2 = x+y;
	}

	cout << x1 << ' ' << y1 << ' ' << x2 << ' ' << y2 << en;

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	while(T--) {
		sol();
	}

	return 0;
}
