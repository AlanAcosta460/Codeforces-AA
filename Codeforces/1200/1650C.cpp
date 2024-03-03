#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, i = 1;
    cin >> n >> m;

    vector<pair<int, pair<long long, int>>> points(m);
    
    for (auto &p : points) {
        cin >> p.second.first >> p.first;
        p.second.second = i++;
    }
   
    sort(points.begin(), points.end());

    vector<pair<long long, int>> aux(2 * n);
    long long sum = 0;
    for (i = 0; i < (2 * n); i++) {
        aux[i] = points[i].second;
        sum += points[i].first;
    } 

    sort(aux.begin(), aux.end());

    cout << sum << endl;
    for (i = 0; i < n; i++) cout << aux[i].second << ' ' << aux[(2 * n - 1) - i].second << endl;
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
