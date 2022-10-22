#include <bits/stdc++.h>
using namespace std;


void sol() {
	int n;
	int sum = 0;
	vector<int> v;
	cin >> n;
	v.resize(n);
	for(int i=0;i<n;++i) {
		cin >> v[i];
		sum += v[i];
	}

	sort(v.begin(), v.end(), greater<>());
	int ans = 0;
	int collect = 0;

	int i=0;
	while(i<v.size() && collect <= sum) {
		ans++;
		collect += v[i];
		sum -= v[i];
		i++;
	}
	cout << ans << '\n';

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	sol();

	return 0;
}