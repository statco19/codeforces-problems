#include <bits/stdc++.h>
using namespace std;

void sol() {
	int w;
	cin >> w;
	if(w <= 2) {
		cout << "NO" << '\n';
		return;
	}
	
	if(w&1^1) cout << "YES" << '\n';
	else cout << "NO" << '\n';

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	sol();

	return 0;
}