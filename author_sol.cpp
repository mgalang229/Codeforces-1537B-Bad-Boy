#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, m, i, j;
		cin >> n >> m >> i >> j;
		// we can notice that placing the yoyos in opposite corners the 
		// distance will always be maximum possible.
		// so, one possible answer is to always place the first yoyo 
		// in the top-left cell (1, 1) and the second one in the bottom-right cell (n, m)
		cout << 1 << " " << 1 << " " << n << " " << m << '\n';
	}
	return 0;
}
