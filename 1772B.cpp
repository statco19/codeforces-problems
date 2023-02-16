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
	int mat[2][2] = {0};
	cin >> mat[0][0] >> mat[0][1] >> mat[1][0] >> mat[1][1];

	for(int i=0; i<4; ++i) {
		if(mat[0][0] < mat[0][1] && mat[1][0] < mat[1][1] && mat[0][0] < mat[1][0] && mat[0][1] < mat[1][1]) {
			cout << "YES" << en;
			return;
		} else {
			int x = mat[0][0];
			mat[0][0] = mat[1][0];
			mat[1][0] = mat[1][1];
			mat[1][1] = mat[0][1];
			mat[0][1] = x;
		}
	}
	cout << "NO" << en;

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