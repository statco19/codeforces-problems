#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define vt vector
#define ll long long
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define en '\n'

const int d4r[4] = {-1,0,1,0}; const int d4c[4] = {0,1,0,-1};
const int d8r[8] = {-1,-1,0,1,1,1,0,-1}; const int d8c[8] = {0,1,1,1,0,-1,-1,-1};
const int INF = 0x3f3f3f3f; const int mINF = 0xc0c0c0c0;
const ll LINF = 0x3f3f3f3f3f3f3f3f; const ll mLINF = 0xc0c0c0c0c0c0c0c0;
int T = 1;

string f,m,s;

void sol() {
	cin >> f >> m >> s;
	if(f == "rock" && m == "scissors" && s == "scissors") {
		cout << "F" << en;
		return;
	} else if(f == "scissors" && m == "paper" && s == "paper") {
		cout << "F" << en;
		return;
	} else if(f == "paper" && m == "rock" && s == "rock") {
		cout << "F" << en;
		return;
	} else if(m == "rock" && f == "scissors" && s == "scissors") {
		cout << "M" << en;
		return;
	} else if(m == "scissors" && f == "paper" && s == "paper") {
		cout << "M" << en;
		return;
	} else if(m == "paper" && f == "rock" && s == "rock") {
		cout << "M" << en;
		return;
	} else if(s == "rock" && f == "scissors" && m == "scissors") {
		cout << "S" << en;
		return;
	} else if(s == "scissors" && f == "paper" && m == "paper") {
		cout << "S" << en;
		return;
	} else if(s == "paper" && f == "rock" && m == "rock") {
		cout << "S" << en;
		return;
	}

	cout << "?" << en;

	return;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	while(T--) {
		sol();
	}

	return 0;
}