#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    int i1, i2, i3;
    if (n <= 26) {
        i1 = 1;
        i2 = 1;
        i3 = n - 2;
    } else if (n <= 52) {
        i1 = 1;
        if (n == 27) {
            i2 = 1; 
            i3 = 25;
        } else {
           i3 = 26;
           i2 = n - 27; 
        }
    } else {
        i1 = n - 52;
        i2 = 26;
        i3 = 26;
    }

    s += char(96 + i1);
    s += char(96 + i2);
    s += char(96 + i3);

    cout << s << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
