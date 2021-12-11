#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

struct Team {
	ll teamno;
	bool isSolved[10] = {false};
	string results[10];
	ll scores[10] = {0};
	ll penalty = 0;
	ll tsolved = 10;

	void calcTotal() {
		for (int i = 0; i < 10; ++i) {
			if (!isSolved[i]) {
				scores[i] = 0;
				tsolved--;
			}
			penalty = penalty + scores[i];
		}
	}

	void updateScores(ll team, ll problem, ll time, string verdict ) {
		this->teamno = team;
		results[problem - 1] = verdict;
		if (verdict == "C" && !isSolved[problem - 1]) {
			isSolved[problem - 1] = true;
			scores[problem - 1] = scores[problem - 1] + time;
		} else if (verdict == "I" && !isSolved[problem - 1]) scores[problem - 1] = scores[problem - 1] + 20;
		// cout << "problem" << problem << " updated score " << scores[problem - 1] << endl;
	}

	void printScores() {
		cout << teamno << " " << tsolved << " " << penalty << "\n";
	}

};

bool sortBoard(Team t1, Team t2) {
	if (t1.tsolved != t2.tsolved) return t1.tsolved > t2.tsolved;
	if (t1.penalty != t2.penalty) return t1.penalty < t2.penalty;
	return t1.teamno < t2.teamno;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cin.tie(0);
	ios::sync_with_stdio(0);

	ll tc;
	cin >> tc;
	cin.ignore();
	cin.ignore();
	while (tc--) {
		bool submissions = false;
		bool teamexists[101] = {false};
		Team teams[101];
		bool cont = true;
		string line;
		while (getline(cin, line)) {
			if (line.length() == 0) cont = false;
			if (!cont) break;
			submissions = true;
			stringstream ss(line);
			ll team, problem, time;
			string verdict;
			ss >> team >> problem >> time >> verdict;
			// cout  << team << "\t" << problem << "\t" << time << "\t" << verdict << "\n";
			if (!teamexists[team - 1]) {
				teamexists[team - 1] = true;
			}
			teams[team - 1].updateScores(team, problem, time, verdict);
		}

		vector<Team> ans;
		for (int i = 0; i < 100; ++i) {
			if (teamexists[i]) {
				teams[i].calcTotal();
				ans.push_back(teams[i]);
			}
		}

		sort(ans.begin(), ans.end(), sortBoard);
		for (int i = 0; i < ans.size(); ++i) {
			ans[i].printScores();
		}

		if (tc && submissions) cout << "\n";
	}
	return 0;
}