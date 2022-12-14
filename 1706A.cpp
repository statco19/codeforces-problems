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
#define sz(x) (int)(x).size()
#define en '\n'

const int d4r[4] = {-1,0,1,0}; const int d4c[4] = {0,1,0,-1};
const int d8r[8] = {-1,-1,0,1,1,1,0,-1}; const int d8c[8] = {0,1,1,1,0,-1,-1,-1};
const int INF = 0x3f3f3f3f; const int mINF = 0xc0c0c0c0;
const ll LINF = 0x3f3f3f3f3f3f3f3f; const ll mLINF = 0xc0c0c0c0c0c0c0c0;
int T = 1;


void sol() {
	int n,m;
	bool vis[51];
	memset(vis,0,sizeof(vis));
	cin >> n >> m;
	string s="";
	for(int i=0; i<m; ++i) s += "B";

	vt<int> ar(n);
	for(int i=0; i<n; ++i) {
		cin >> ar[i];
	}

	for(int i=0; i<sz(ar); ++i) {
		if(!vis[ar[i]] && !vis[m+1-ar[i]]) {
			if(ar[i] <= m+1-ar[i]) {
				vis[ar[i]] = 1;
				s[ar[i]-1] = 'A';
			} else {
				vis[m+1-ar[i]] = 1;
				s[m-ar[i]] = 'A';
			}
		} else if(!vis[ar[i]]) {
			vis[ar[i]] = 1;
			s[ar[i]-1] = 'A';
		} else if(!vis[m+1-ar[i]]) {
			vis[m+1-ar[i]] = 1;
			s[m-ar[i]] = 'A';
		}
	}

	cout << s << en;

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
