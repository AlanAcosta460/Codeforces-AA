#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &aux : a) cin >> aux;

    vector<int> vec;
    set<int> sett;
    int size = 0;

    for (auto aux : a) {
        sett.insert(aux);
        if (sett.size() > size) size++;
        else vec.push_back(aux);
    }

    sort(vec.begin(), vec.end());

    for (auto x : sett) cout << x << ' ';
    for (auto x : vec) cout << x << ' ';
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
