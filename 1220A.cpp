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

int one, zero, sub;

void sol() {
	int n;
	string s;
	cin >> n >> s;
	for(int i=0; i<s.size(); ++i) {
		if(s[i] == 'n') {
			one++;
			sub += 3;
		}
	}
	if(sub) {
		if(s.size() - sub) {
			zero += (s.size() - sub) / 4;
		}
	} else {
		zero += s.size() / 4;
	}

	for(int i=0; i<one; ++i)
		cout << 1 << ' ';
	for(int i=0; i<zero; ++i)
		cout << 0 << ' ';
	cout << en;

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	while(T--) {
		sol();
	}

	return 0;
}