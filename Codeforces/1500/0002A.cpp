#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    map<string, int> scores;
    vector<pair<int, string>> log;
    string name;
    int score;
    while (n--) {
        cin >> name >> score;
        scores[name] += score;
        log.push_back(pair(scores[name], name));
    }
    
    int maxScore = 0;
    for (auto s : scores) if (s.second > maxScore) maxScore = s.second;

    vector<string> possible;
    for (auto s : scores) if (s.second == maxScore) possible.push_back(s.first); 

    pair<int, string> winner;
    for (auto l : log) 
        if (l.first >= maxScore && find(possible.begin(), possible.end(), l.second) != possible.end()) {
            winner = l;
            break;
        }

    cout << winner.second << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
