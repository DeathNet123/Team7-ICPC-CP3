#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main() {
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
	ll n;
	while (cin >> n) {
		ll size = n;
		std::vector<bool> v(size, false);
		ll f;
		cin >> f;
		n -= 1;
		bool answer = true;
		while (n--) {
			ll k;
			cin >> k;
			ll diff = k - f;
			if (diff <	0) diff = -diff;
			if (diff > size - 1) diff = 0;
			v[diff] = true;
			f = k;
		}
		for (int i = 1; i < v.size(); ++i) {
			if (v[i] == false) {
				answer = false;
				break;
			}
		}
		if (answer) cout << "Jolly\n";
		else cout << "Not jolly\n";
	}
	return 0;
}