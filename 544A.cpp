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

bool v[26];
int cnt;

void sol() {
	int k;
	string q;
	cin >> k;
	cin >> q;

	vt<int> ind;
	for(int i=0; i<sz(q); ++i) {
		if(!v[q[i]-'a']) {
			v[q[i]-'a'] = 1;
			cnt++;
			ind.pb(i);
		}
	}
	if(k > cnt) {
		cout << "NO" << en;
		return;
	} else {
		cout << "YES" << en;
		for(int i=0; i<k; ++i) {
			if(i == k-1) {
				cout << q.substr(ind[i], string::npos) << en;
			} else {
				cout << q.substr(ind[i], ind[i+1]-ind[i]) << en;
			}
		}
		return;
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