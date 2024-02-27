#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long int> vec(n);
    for (auto &x : vec) cin >> x;

    long long int counter = 0, aux;
    for (int i = 1; i < n; i++) {
        if (vec[i] < vec[i - 1]) {
            aux = vec[i - 1] - vec[i];
            vec[i] += aux;
            counter += aux;
        }
    }

    cout << counter << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
