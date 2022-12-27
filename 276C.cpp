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
#define mid (st+end)/2

const int d4r[4] = {-1,0,1,0}; const int d4c[4] = {0,1,0,-1};
const int d8r[8] = {-1,-1,0,1,1,1,0,-1}; const int d8c[8] = {0,1,1,1,0,-1,-1,-1};
const int INF = 0x3f3f3f3f; const int mINF = 0xc0c0c0c0;
const ll LINF = 0x3f3f3f3f3f3f3f3f; const ll mLINF = 0xc0c0c0c0c0c0c0c0;
int T = 1;

ll arr[200001];
ll tree[800008];
ll lazy[800008];
int n,q;

void init(int node, int st, int end) {
	if(st == end) {
		tree[node] = arr[st];
	} else {
		init(node*2, st, mid);
		init(node*2+1, mid+1, end);
		tree[node] = tree[node*2] + tree[node*2+1];
	}
	return;
}

void update_lazy(int node, int st, int end) {
	if(lazy[node] != 0) {
		tree[node] += (end-st+1)*lazy[node];
		if(st != end) {
			lazy[node*2] += lazy[node];
			lazy[node*2+1] += lazy[node];
		}

		lazy[node] = 0;
	}

	return;
}

void update_range(int node, int st, int end, int left, int right, ll diff) {
	update_lazy(node, st, end);
	if(left > end || right < st) {
		return;
	}

	if(left<=st && end<=right) {
		tree[node] += (end-st+1)*diff;
		if(st != end) {
			lazy[node*2] += diff;
			lazy[node*2+1] += diff;
		}
		return;
	}

	update_range(node*2, st, mid, left, right, diff);
	update_range(node*2+1, mid+1, end, left, right, diff);
	tree[node] = tree[node*2] + tree[node*2+1];

	return;
}

ll query(int node, int st, int end, int left, int right) {
	update_lazy(node, st, end);
	if(left > end || right < st) {
		return 0;
	}

	if(left<=st && end<=right) {
		return tree[node];
	}

	ll lsum = query(node*2, st, mid, left, right);
	ll rsum = query(node*2+1, mid+1, end, left, right);

	return lsum + rsum;
}

void sol() {
	cin >> n >> q;
	for(int i=1; i<=n; ++i) cin >> arr[i];	

	vt<pii> qs;
	ll l,r;
	for(int i=0; i<q; ++i) {
		cin >> l >> r;	
		qs.pb({l,r});
		update_range(1,1,n,l,r,1);
	}

	vt<pii> v;
	for(int i=1; i<=n; ++i) {
		v.pb({query(1,1,n,i,i), i});
	}

	sort(rev(v));
	vt<int> a;
	for(int i=1; i<=n; ++i) {
		a.pb(arr[i]);
	}
	sort(rev(a));

	memset(arr,0,sizeof(arr));
	for(int i=0; i<n; ++i) {
		arr[v[i].S] = a[i];
	}

	init(1,1,n);

	ll ans = 0;
	for(int i=0; i<q; ++i) {
		ans += query(1,1,n,qs[i].F, qs[i].S);
	}
	cout << ans << en;

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	while(T--) {
		sol();
	}

	return 0;
}
