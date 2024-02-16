#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];

    vector<int> count(5, 0);
    for (int i = 0; i < n; i++) count[s[i]]++;

    int taxis = count[4] + count[3] + count[2] / 2;
    count[1] -= count[3];
    if (count[2] % 2 == 1) {
        taxis++;
        count[1] -= 2;
    }
    if (count[1] > 0) taxis += (count[1] + 3) / 4;

    cout << taxis << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> tc;
    while (t--) solve();
}
