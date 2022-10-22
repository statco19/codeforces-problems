#include <bits/stdc++.h>
using namespace std;

void sol() {
	int n;
	cin >> n;
	for(int i=0;i<n;++i) {
		string s;
		cin >> s;
		if(s.size() > 10) {
			string t;
			t += s[0];
			t += to_string(s.size()-2);
			t += s[s.size()-1];
			cout << t << '\n';
		} else {
			cout << s << '\n';
		}
	}

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	sol();

	return 0;
}