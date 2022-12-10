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
	int n;
	string s;
	int ans = 0;
	cin >> n >> s;

	for(int i=0; i<sz(s)-1; ++i) {
		if(s[i] == s[i+1]) {
			if(i+1 == sz(s)-1) {
				swap(s[i],s[i+1]);
				ans++;
			} else {
				int st = i;
				i++;
				while(s[i] != s[i+1]) {
					i++;
				}

				int e = i;

				swap(s[st],s[e]);
				ans++;
			}
		}
	}

	cout << ans << en;

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