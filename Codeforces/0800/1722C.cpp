#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    map<string, string> words;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            string aux;
            cin >> aux;
            words[aux] += to_string(i);
        }
    }
    
    vector<int> points(3, 0);
    for (auto [key, word] : words) {
        if (word.size() == 1) points.at(int(word[0]) - 48) += 3;   
        else if (word.size() == 2) {
            points.at(int(word[0]) - 48)++;
            points.at(int(word[1]) - 48)++;
        }
    }

    for (auto p : points) cout << p << ' ';
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
