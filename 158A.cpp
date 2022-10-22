#include <bits/stdc++.h>
using namespace std;

void sol() {
	int n,k;
	int ans = 0;
	cin >> n >> k;
	vector<int> v;
	v.resize(n);
	for(int i=0;i<n;++i) {
		cin >> v[i];	 
	}

	for(int i=0;i<n;++i) {
		if(v[i] >= v[k-1] && v[i] > 0) {
			ans++;
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