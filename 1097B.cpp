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
	vt<int> arr;
	cin >> n;
	arr.resize(n);
	for(int i=0; i<n; ++i) {
		cin >> arr[i];
	}

	int bit = 0;
	for(;bit<pow(2,n);++bit) {
		int sum = 0;
		for(int i=0; i<n; ++i) {
			if(bit & (1<<i)) {
				sum += arr[i];
			} else {
				sum -= arr[i];
			}
		}

		if(abs(sum) % 360 == 0) {
			cout << "YES" << en;
			return;
		}
	}
	cout << "NO" << en;

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	while(T--) {
		sol();
	}

	return 0;
}