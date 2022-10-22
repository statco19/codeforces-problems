#include <bits/stdc++.h>
using namespace std;

void sol() {
	int M,N;
	int ans = 0;
	cin >> M >> N;

	while(M>1) {
		ans += N;
		M -= 2;
	}
	while(M==1 && N>1) {
		ans += 1;
		N -= 2;
	}
	cout << ans << '\n';

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	sol();

	return 0;
}