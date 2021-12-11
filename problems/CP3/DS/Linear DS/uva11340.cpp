#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	ll t;
	cin >> t;
	while (t--) {
		map<char, pair<ll, ll>> mp;
		ll k;
		cin >> k;
		while (k--) {
			char k;
			ll val;
			cin >> k >> val;
			mp.insert(make_pair(k, make_pair(val, 0)));
		}
		ll lines;
		cin >> lines;
		lines++;
		while (lines--) {
			string line;
			getline(cin, line);
			// cout << line << endl;
			for (int i = 0; i < line.length(); ++i) {
				auto it = mp.find(line[i]);
				if (it != mp.end()) it->second.second++;
			}
		}
		long double ans = 0;
		for (auto it = mp.cbegin(); it != mp.cend(); it++) {
			ans += it->second.second * it->second.first;
		}
		cout << std::fixed << std::setprecision(2) << ans / 100 << "$\n";
	}
	return 0;
}