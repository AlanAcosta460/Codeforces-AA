#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, aux;
    cin >> n;

    vector<pair<int, int>> width(n);
    for (int i = 0; i < n; i ++) {
        cin >> aux;
        width[i].first = aux;
        width[i].second = i + 1;
    }

    string s;
    cin >> s;

    sort(width.begin(), width.end());

    priority_queue<pair<int, int>> pq;
    vector<int> order;
    int pointer = 0;

    for (auto ch : s) {
        if (ch == '0') {
            pq.push(width[pointer++]);
            order.push_back(pq.top().second);
        } else {
            order.push_back(pq.top().second);
            pq.pop();
        }
    }

    for (auto o : order) cout << o << ' ';
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
