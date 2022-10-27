#include <bits/stdc++.h>
using namespace std;

#define vt vector
#define ll long long
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define en '\n'
int T = 1;


void sol() {
	int n,m;
	int ans = 0;
	cin >> n >> m;

	int a,b;
	while(n>0 && m>0 && n+m>=3) {
		if(n>=m) {
			n -= 2; m--;
		} else {
			m -= 2; n--;
		}
		ans++;
	}
	cout << ans << '\n';

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	while(T--) {
		sol();
	}

	return 0;
}