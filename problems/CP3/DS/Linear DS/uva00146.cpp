#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main() {
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	cin.tie(0);
	ios::sync_with_stdio(0);
	string s;
	while (true) {
		cin >> s;
		string tmp = s;
		if (s == "#") return 0;
		if (next_permutation(s.begin(), s.end())) cout << s << "\n";
		else cout << "No Successor\n";
	}
	return 0;
}