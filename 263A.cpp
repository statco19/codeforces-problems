#include <bits/stdc++.h>
using namespace std;

int m[6][6];
int ans;

void sol() {
	for(int i=1;i<=5;++i) {
		for(int j=1;j<=5;++j) {
			cin >> m[i][j];
			if(m[i][j]) {
				ans = abs(i-3) + abs(j-3);
			}
		}
	}
	cout << ans << '\n';

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	sol();

	return 0;
}