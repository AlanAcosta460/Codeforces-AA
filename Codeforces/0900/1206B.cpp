#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long int n;
    cin >> n;

    vector<long long int> a(n);
    for (auto &x : a) cin >> x;

    sort(a.begin(), a.end());

    long long int counter = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0 && a[i+1] < 0 ) {
            counter += abs(a[i]) - 1;
            counter += abs(a[i + 1]) - 1;
            i++;
        } else if (a[i] < 0 && a[i + 1] == 0) {
            counter += abs(a[i]) - 1;
            counter++;
            i++;
        } else if (a[i] < 0) counter += abs(a[i]) + 1;
        else if (a[i] > 0) counter += a[i] - 1;
        else counter++;
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
