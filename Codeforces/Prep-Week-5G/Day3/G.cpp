#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    map<string, string> m;
    vector<int> counter(3, 0);

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        m[word] += "1";
    }

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        m[word] += "2";
    }    

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        m[word] += "3";
    }

    for (auto i : m) {
        if (i.second == "1") counter[0] += 3;
        else if (i.second == "2") counter[1] += 3;
        else if (i.second == "3") counter[2] += 3;
        else if (i.second == "12") {
            counter[0]++;
            counter[1]++;
        } else if (i.second == "13") {
            counter[0]++;
            counter[2]++;
        } else if (i.second == "23") {
            counter[1]++;
            counter[2]++;
        }
    }

    cout << counter[0] << " " << counter[1] << " " << counter[2] << "\n";
} 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) solve();
}