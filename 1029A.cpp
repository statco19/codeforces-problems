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

int n,k;
string t;

void sol() {
	cin >> n >> k;
	cin >> t;

	vt<int> pi(sz(t),0);
	int j=0;
	for(int i=1; i<sz(t); ++i) {
		while(j > 0 && t[i] != t[j]) {
			j = pi[j-1];
		}
		if(t[i] == t[j]) {
			pi[i] = ++j;
		}
	}

	int mx = pi[sz(t)-1];

	string a = t.substr(0,mx);
	string b = t.substr(mx,sz(t));

	for(int i=0; i<k; ++i) {
		a += b;
	}
	cout << a << en;

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	while(T--) {
		sol();
	}

	return 0;
}