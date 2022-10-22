#include <bits/stdc++.h>
using namespace std;

void sol() {
	string s;
	cin >> s;
	bool dangerous = false;
	int cnt = 1;
	for(int i=1;i<s.size();++i) {
		if(s[i-1]^s[i]) {
			cnt = 1;
		} else {
			if(++cnt >= 7) {
				dangerous = true;
				break;
			}
		}
	}

	if(dangerous) cout << "YES" << '\n';
	else cout << "NO" << '\n';

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	sol();

	return 0;
}