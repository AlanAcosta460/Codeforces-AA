#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<long long int> a(n), b(m);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    long long int counter = 0;
    int i = n, aBegin = 0, aEnd = n - 1, bBegin = 0, bEnd = m - 1;
    while(i--) {
        if (abs(a[aEnd] - b[bBegin]) >= abs(b[bEnd] - a[aBegin])) {
            counter += abs(a[aEnd] - b[bBegin]);
            aEnd--;
            bBegin++;
        } else {
            counter += abs(b[bEnd] - a[aBegin]);
            bEnd--;
            aBegin++;
        }
        n--;
        m--;
    }

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
