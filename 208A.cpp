#include <bits/stdc++.h>
using namespace std;

vector<string> split (const string &s, string delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;

    while ((pos_end = s.find (delimiter, pos_start)) != string::npos) {
        token = s.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back (token);
    }

    res.push_back (s.substr (pos_start));
    return res;
}

void sol() {
	string s,t;

	cin >> s;
	vector<string> res = split(s,"WUB");
	for(int i=0;i<res.size();++i) {
		if(res[i] == "") continue;
		cout << res[i];
		if(i < res.size()-1) cout << ' ';
	}
	cout << '\n';

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int T = 1;
	while(T--) {
		sol();
	}

	return 0;
}