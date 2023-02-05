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

void sol() {
	int n;
	cin >> n;
	int aw = 1, ab = 0, bw = 0, bb = 0;
	n--;

	int card = 2;
	int turn = 1;
	int t = 0;
	while(n) {
		if(n >= card) {
			if(turn) {
				if(t ==	0) {
					bw += card / 2;
					bb += card / 2;
				} else {
					bw += card / 2;
					bb += card / 2 + 1;
				}
			} else {
				if(t == 0) {
					aw += card / 2;
					ab += card / 2;
				} else {
					aw += card / 2 + 1;
					ab += card / 2;
				}
			}
			n -= card;
		} else {
			if(turn) {
				int k = n;
				int black = 1;
				while(k--) {
					if(black) bb++;
					else bw++;

					black ^= 1;
				}
			} else {
				int k = n;
				int white = 1;
				while(k--) {
					if(white) aw++;
					else ab++;

					white ^= 1;
				}
			}
			n = 0;
		}

		card++;
		if(++t == 2) {
			t = 0;
			turn ^= 1;
		}
	}

	cout << aw << " " << ab << " " << bw << " " << bb << en;

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> T;
	while(T--) {
		sol();
	}

	return 0;
}