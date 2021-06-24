#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, m, x, y;
		cin >> n >> m >> x >> y;
		// calculate the distance (x, y) to (1, 1) (which is the upper left corner)
		int upper_left_corner = abs(1 - x) + abs (y - 1);
		// calculate the distance (x, y) to (1, m) (which is the upper right corner)
		int upper_right_corner = abs(1 - x) + abs(m - y);
		// calculate the distance (x, y) to (n, m) (which is the lower right corner)
		int lower_right_corner = abs(n - x) + abs(m - y);
		// calculate the distance (x, y) to (n, 1) (which is the lower left corner)
		int lower_left_corner = abs(n - x) + abs(1 - y);
		// find the maximum distance where the 1st yoyo should be thrown
		int maximum_distance = max({upper_left_corner, upper_right_corner, lower_right_corner, lower_left_corner});
		if (maximum_distance == upper_left_corner) {
			// if the maximum distance can be found in the upper left corner, then the 2nd yoyo
			// should be thrown in the opposite corner (which is the lower right corner)
			cout << "1 1 " << n << " " << m;
		} else if (maximum_distance == upper_right_corner) {
			// if the maximum distance can be found in the upper right corner, then the 2nd yoyo
			// should be thrown in the opposite corner (which is the lower left corner)
			cout << "1 " << m << " " << n << " 1";
		} else if (maximum_distance == lower_right_corner) {
			// if the maximum distance can be found in the lower right corner, then the 2nd yoyo
			// should be thrown in the opposite corner (which is the upper left corner)
			cout << n << " " << m << " 1 1";
		} else {
			// if the maximum distance can be found in the lower left corner, then the 2nd yoyo
			// should be thrown in the opposite corner (which is the upper right corner)
			cout << n << " 1 1 " << m;
		}
		cout << '\n';
	}
	return 0;
}
