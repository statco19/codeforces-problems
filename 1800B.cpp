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
	int n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	umap<char, int> um;

	for(int i=0; i<n; ++i) {
		um[s[i]]++;
		if(s[i] < 97) { // 'A'
			if(um.find(s[i]+32) == um.end()) {
				um[s[i]+32] = 0;
			}
		} else { // 'a'
			if(um.find(s[i]-32) == um.end()) {
				um[s[i]-32] = 0;
			}
		}
	}

	int cnt = 0;
	int more = 0;
	for(int i='a'; i<='z'; ++i) {
		if(um.find(i) != um.end() && um.find(i-32) != um.end()) {
			auto p = um.find(i);
			auto q = um.find(i-32);

			int pc = p->second;
			int qc = q->second;
			cnt += min(pc, qc);
			more += abs(pc - qc) / 2;
		}
	}

	cout << cnt + min(k, more) << en;

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