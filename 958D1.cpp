#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define vt vector
#define ll long long
#define pb push_back
#define ioa insert_or_assign
#define umap unordered_map
#define prq priority_queue
#define F first
#define S second
#define all(c) (c).begin(), (c).end()
#define rev(c) (c).rbegin(), (c).rend()
#define sz(x) (int)(x).size()
#define mset(ar, val) memset(ar, val, sizeof(ar))
#define en '\n'

const int d4r[4] = {-1,0,1,0}; const int d4c[4] = {0,1,0,-1};
const int d8r[8] = {-1,-1,0,1,1,1,0,-1}; const int d8c[8] = {0,1,1,1,0,-1,-1,-1};
const int INF = 0x3f3f3f3f; const int mINF = 0xc0c0c0c0;
const ll LINF = 0x3f3f3f3f3f3f3f3f; const ll mLINF = 0xc0c0c0c0c0c0c0c0;
int T = 1;

void sol() {
	int m;
	scanf("%d", &m);

	double arr[200000];
	mset(arr,0.0);

	umap<double,int> um;
	int a,b,c;
	for(int i=0; i<m; ++i) {
		scanf(" (%d+%d)/%d", &a, &b, &c);
		double x = (double)(a+b) / c;
		arr[i] = x;

		if(um.find(x) != um.end()) {
			auto p = um.find(x);
			um.ioa(x, (p->second)+1);
		} else {
			um.ioa(x,1);
		}
	}

	for(int i=0; i<m; ++i) {
		if(um.find(arr[i]) != um.end())
			printf("%d ", um.find(arr[i])->second);
	}
	printf("\n");

	return;
}

int main() {
	// ios_base::sync_with_stdio(0); cin.tie(0);

	while(T--) {
		sol();
	}

	return 0;
}
