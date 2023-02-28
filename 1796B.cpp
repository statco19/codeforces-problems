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
	string a,b;
	cin >> a >> b;
	if(a == b) {
		cout << "YES" << en;
		cout << a << en;
		return;
	}

	for(int i=0; i<sz(a); ++i) {
		for(int j=0; j<sz(b); ++j) {
			if(a[i] == b[j]) {
				string s = "";
				int cnt = 0;
				int p = i, q = j;
				while(p<sz(a) && q<sz(b) && a[p] == b[q]) {
					s += a[p];
					cnt++;
					p++;
					q++;
				}

				if(cnt >= 2) {
					cout << "YES" << en;
					cout << "*"+s+"*" << en;
					return;
				} else {
					if(i == 0 && j == 0) {
						cout << "YES" << en;
						cout << s+"*" << en;
						return;
					} else if(p==sz(a) && q==sz(b)) {
						cout << "YES" << en;
						cout << "*"+s << en;
						return;
					}
				}
			}
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