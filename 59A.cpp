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

string s;

void sol() {
	cin >> s;
	int up = 0, low = 0;
	for(int i=0; i<sz(s); ++i) {
		int x = s[i] - 'A';
		if(0<=x&&x<=25) up++;
		else low++;
	}

	if(low >= up) {
		for(int i=0; i<sz(s); ++i ) {
			int x = s[i] - 'A';
			if(0<=x && x<=25) {
				s[i] = s[i] + 32;
			}
		}
	} else {
		for(int i=0; i<sz(s); ++i) {
			int x = s[i] - 'A';
			if(x > 25) {
				s[i] = s[i] - 32;
			}
		}
	}
	cout << s << en;

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	while(T--) {
		sol();
	}

	return 0;
}