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
	int x;
	cin >> x;
	if(x < 1200) cout << 1200 << en;
	else if(1200<=x && x<1400) cout << 1400 << en;
	else if(1400<=x && x<1600) cout << 1600 << en;
	else if(1600<=x && x<1900) cout << 1900 << en;
	else if(1900<=x && x<2100) cout << 2100 << en;
	else if(2100<=x && x<2300) cout << 2300 << en;
	else if(2300<=x && x<2400) cout << 2400 << en;
	else if(2400<=x && x<2600) cout << 2600 << en;
	else if(2600<=x) cout << 3000 << en;

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	while(T--) {
		sol();
	}

	return 0;
}
