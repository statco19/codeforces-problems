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

string s,t;
double ans = 0.0;

void dfs(int q, int dt, int ds, double p) {
	if(q == 0) {
		if(dt == ds) ans += p;
		return;
	}

	for(int i=0; i<2; ++i) {
		if(i&1) {  // '+'
			dfs(q-1, dt+1, ds, p*0.5);
		} else {  // '-'
			dfs(q-1, dt-1, ds, p*0.5);
		}
	}
}

void sol() {
	cin >> s >> t;
	int ds = 0, dt = 0;
	for(int i=0; i<sz(s); ++i) {
		if(s[i] == '+') ds++;
		else ds--;
	}

	int q = 0;  // # question marks
	for(int i=0; i<sz(t); ++i) {
		if(t[i] == '+') dt++;
		else if(t[i] == '-') dt--;
		else q++;
	}

	if(q == 0) {
		if(ds == dt) {
			ans = 1.0;
		} else {
			ans = 0.0;
		}
	} else {
		dfs(q, dt, ds, 1.0);
	}

	cout << fixed;
    cout.precision(10);
    cout << ans << en;

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	while(T--) {
		sol();
	}

	return 0;
}