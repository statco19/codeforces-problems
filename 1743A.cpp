#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define vt vector
#define ll long long
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define en '\n'
int T = 1;

void sol() {
	int n;
	cin >> n;
	int x;
	for(int i=0; i<n; ++i) {
		cin >> x;
	}

	int k = 10 - n;
	cout << k*(k-1)/2 * 6 << en;

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