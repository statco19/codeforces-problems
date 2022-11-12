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

void sol() {
	int n;
	cin >> n;
	int k = pow(2,floor(log2(n)));

	if(n <= k) {
		int m = pow(2,log2(k)-1);
		for(int i=m-1; i>=0; --i) {
			cout << i << ' ';
		}
		for(int i=m; i<n; ++i) {
			cout << i;
			if(i != n-1) cout << ' ';
		}
	} else {
		for(int i=k-1; i>=0; --i) {
			cout << i << ' ';
		}
		cout << k;
		for(int i=k+1; i<n; ++i) {
			cout << ' ' << i;
		}
	}
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