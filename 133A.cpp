#include <bits/stdc++.h>
using namespace std;

void sol() {
	string s;
	cin >> s;
	for(int i=0;i<s.size();++i) {
		if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
			cout << "YES" << '\n';
			return;
		}
	}
	cout << "NO" << '\n';

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	sol();

	return 0;
}