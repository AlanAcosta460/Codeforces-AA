#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    string s;
    cin >> n >> s;
    int counter = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'p' && (i - 2) >= 0 && s[i - 1] == 'a' && s[i - 2] == 'm') counter++;
        else if (s[i] == 'p' && (i + 2) < n && s[i + 1] == 'i' && s[i + 2] == 'e') counter++;
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
