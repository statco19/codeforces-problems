#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define vt vector
#define ll long long
#define pb push_back
#define ioa insert_or_assign
#define umap unordered_map
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define en '\n'

const int d4r[4] = {-1,0,1,0}; const int d4c[4] = {0,1,0,-1};
const int d8r[8] = {-1,-1,0,1,1,1,0,-1}; const int d8c[8] = {0,1,1,1,0,-1,-1,-1};
const int INF = 0x3f3f3f3f; const int mINF = 0xc0c0c0c0;
const ll LINF = 0x3f3f3f3f3f3f3f3f; const ll mLINF = 0xc0c0c0c0c0c0c0c0;
int T = 1;

int n;
string a,b;

void sol() {
	cin >> n;
	cin >> a >> b;

	int cnt = 0;

	for(int i=0; i<n-1; ++i) {
		if(a[i] == b[i]) continue;

		if(a[i+1] == b[i+1]) cnt++;  // replace
		else {
			if(a[i] != a[i+1]) {
				swap(a[i], a[i+1]);
				cnt++;  // swap for distance 1;
			} else {
				cnt++;  // replace
			}
		}
	}
	if(a[n-1] != b[n-1]) cnt++;

	cout << cnt << en;

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	while(T--) {
		sol();
	}

	return 0;
}