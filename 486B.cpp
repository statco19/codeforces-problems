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
	int m,n;
	int B[101][101], A[101][101];
	memset(A,-1,sizeof(A));
	cin >> m >> n;
	for(int i=1; i<=m; ++i) {
		for(int j=1; j<=n; ++j){
			cin >> B[i][j];
		}
	}
	
	for(int i=1; i<=m; ++i) {
		for(int j=1; j<=n; ++j) {
			if(B[i][j] == 0) {
				for(int p=1; p<=n; ++p) {
					A[i][p] = 0;
				}
				for(int q=1; q<=m; ++q) {
					A[q][j] = 0;
				}
			}
		}
	}

	for(int i=1; i<=m; ++i) {
		for(int j=1; j<=n; ++j) {
			if(B[i][j] == 1) {
				bool rowHadBlank = false, colHadBlank = false;
				for(int p=1; p<=n; ++p) {
					if(A[i][p] == -1 || A[i][p] == 1) {
						rowHadBlank = true;
						A[i][p] = 1;
					}
				}
				for(int q=1; q<=m; ++q) {
					if(A[q][j] == -1 || A[q][j] == 1) {
						colHadBlank = true;
						A[q][j] = 1;
					}
				}
				if(!rowHadBlank && !colHadBlank) {
					cout << "NO" << en;
					return;
				}
			}
		}
	}
	cout << "YES" << en;
	for(int i=1; i<=m; ++i) {
		for(int j=1; j<=n; ++j) {
			cout << A[i][j] << ' ';
		}
		cout << en;
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