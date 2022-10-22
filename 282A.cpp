#include <bits/stdc++.h>
using namespace std;

void sol() {
	int n;
	int ans = 0;
	cin >> n;
	for(int i=0;i<n;++i) {
		string s;
		cin >> s;
		if(s == "++X" || s == "X++") {
			ans++;
		} else {
			ans--;
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