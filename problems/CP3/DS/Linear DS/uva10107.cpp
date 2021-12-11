#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void insertionSort(vector<ll> &list) {
	ll key = list[list.size() - 1];
	ll j =  list.size() - 2;
	while (key < list[j] && j >= 0) {
		list[j + 1] = list[j];
		--j;
	}
	list[j + 1] = key;
}

int main() {
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	cin.tie(0);
	ios::sync_with_stdio(0);
	std::vector<ll> list;
	ll x;
	cin >> x;
	list.push_back(x);
	cout << x << "\n";
	while (cin >> x) {
		list.push_back(x);
		insertionSort(list);
		ll mid = list.size() / 2;
		if (list.size() % 2 != 0) {
			cout << list[mid] << "\n";
		} else {
			cout << (list[mid - 1] + list[mid]) / 2 << "\n";
		}
	}
	return 0;
}