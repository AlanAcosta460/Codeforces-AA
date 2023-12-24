#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int &i : a) cin >> i;

    vector<int> distances;
    distances.push_back(a[0]);
    for (int i = 0; i < n - 1; i++) {
        if (a[i] < x && a[i + 1] < x) distances.push_back(a[i + 1] - a[i]);
        else break;
    }

    if (a[n - 1] < x) distances.push_back(2 * (x - a[n - 1]));

    cout << *max_element(distances.begin(), distances.end()) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--) solve();
}
