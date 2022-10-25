#include <bits/stdc++.h>
using namespace std;

#define vt vector
#define ll long long
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define en '\n'

void sol() {
	int n;
	cin >> n;
	vector<int> v;
	v.resize(n);
	for(int i=0;i<n;++i) {
		cin >> v[i];
	}

	int e=0, o=0;
	for(int i=0;i<sz(v);++i) {
		if(v[i]&1) {
			o++;
		} else {
			e++;
		}
	}

	if((e&1^1) && (o&1^1)) {
		cout << "YES" << en;
		return;
	} else {
		sort(all(v));
		for(int i=1;i<sz(v);++i) {
			if(v[i]-v[i-1]==1) {
				cout << "YES" << en;
				return;
			}
		}
		cout << "NO" << en;
	}

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int T = 1;
	cin >> T;
	while(T--) {
		sol();
	}

	return 0;
}