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
vt<int> nums;
umap<int, int> um;
int ans = mINF;


void sol() {
	cin >> n;
	nums.resize(n);
	int x;
	for(int i=0; i<n; ++i) {
		cin >> x;
		nums[i] = x;
	}

	for(int i=0; i<n-1; ++i) {
		for(int j=i+1; j<n; ++j) {
			int sum = nums[i] + nums[j];
			if(um.find(sum) == um.end()) {
				um.ioa(sum, 1);
			} else {
				auto p = um.find(sum);
				um.ioa(sum, p->second+1);
			}
		}
	}

	for(auto it=um.begin(); it != um.end(); ++it) {
		if(it->second > ans) {
			ans = it->second;
		}
	}
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