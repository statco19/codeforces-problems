#include <bits/stdc++.h>
using namespace std;

void sol() {
	int a,b,c;
	cin >> a >> b >> c;
	if(a+b==c || a+c==b || b+c==a) cout << "YES" << '\n';
	else cout << "NO" << '\n';

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int T;
	cin >> T;
	while(T--) {
		sol();
	}

	return 0;
}