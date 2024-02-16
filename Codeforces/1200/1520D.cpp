#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    map<long long int, long long int> diff;
    int aux;
    for (long long int i = 1; i <= n; i++) {
        cin >> aux;
        diff[i - aux]++;
    }
    
    long long int counter = 0;
    for (auto [k, v] : diff) counter += (v * (v - 1)) / 2;

    cout << counter << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
