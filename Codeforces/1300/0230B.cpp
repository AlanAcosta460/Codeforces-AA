#include <bits/stdc++.h>
using namespace std;

map<long long, string> mp;

void solve() {
    long long x1;
    cin >> x1;

    if (mp[x1] != "") {
        cout << mp[x1] << endl;
        return;
    }

    long long x2 = sqrt(x1); 
    if (x2 * x2 != x1 || x1 == 1) {
        cout << "NO" << endl;
        mp[x1] = "NO";
        return;
    }

    long long x3 = sqrt(x2), counter = 0;

    for (long long i = 1; i <= x3; i++) {
        if (x2 % i == 0) counter++;
        if (counter > 1) {
            cout << "NO" << endl;
            mp[x1] = "NO";
            return;
        }
    }
    
    if (counter == 1) {
        cout << "YES" << endl;
        mp[x1] = "YES";
    }
    else {
        cout << "NO" << endl; 
        mp[x1] = "NO";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
