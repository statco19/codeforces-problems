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

void sol() {
	string s;
	int x;
	cin >> s >> x;

	string t;
	for(int i=0; i<sz(s); ++i) t += '-';  // don't care
	
	bool error = 0;
	for(int i=0; i<sz(s); ++i) {
		if(s[i] == '1') {
			if(0<=i-x && t[i-x] != '0') {
				t[i-x] = '1';
			} else if(i+x<sz(s)) {
				t[i+x] = '1';
			} else {
				error = 1;
				break;
			}
		} else {
			if(0<=i-x) {
				if(t[i-x] != '1') t[i-x] = '0';
				else {
					error = 1;
					break;
				}
			}

			if(i+x<sz(s)) {
				t[i+x] = '0';
			}
		}
	}
	if(error) {
		cout << -1 << en;
		return;
	}

	for(int i=0; i<sz(t); ++i) {
		if(t[i] == '-') t[i] = '1';
	}
	cout << t << en;

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