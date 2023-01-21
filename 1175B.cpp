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
#define en "\n"

const int d4r[4] = {-1,0,1,0}; const int d4c[4] = {0,1,0,-1};
const int d8r[8] = {-1,-1,0,1,1,1,0,-1}; const int d8c[8] = {0,1,1,1,0,-1,-1,-1};
const int INF = 0x3f3f3f3f; const int mINF = 0xc0c0c0c0;
const ll LINF = 0x3f3f3f3f3f3f3f3f; const ll mLINF = 0xc0c0c0c0c0c0c0c0;
int T = 1;

vector<string> split (const string &s, char delim) {
    vector<string> result;
    stringstream ss (s);
    string item;

    while (getline (ss, item, delim)) {
        result.push_back (item);
    }

    return result;
}

void sol() {
	ll x = 0;
	int l;
	cin >> l;
	stack<ll> st;
	st.push(1);

	string s;
	bool overflow = 0;
	for(int i=0; i<l+1; ++i) {
		getline(cin, s);

		if(overflow) continue;
		if(sz(s) > 3) {
			ll y = stoi(split(s, ' ')[1]);
			st.push(min(st.top() * y, (1LL<<32)));
		} else {
			if(s == "add") {
				x += st.top();
				if(x > ((1LL<<32) - 1)) {
					overflow = 1;
					continue;
				}
			} else if(s == "end") {
				st.pop();
			}
		}
	}

	if(overflow) cout << "OVERFLOW!!!" << en;
	else cout << x << en;

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	while(T--) {
		sol();
	}

	return 0;
}
