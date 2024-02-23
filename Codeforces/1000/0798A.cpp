#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;  
    cin >> s;
   
    int p1 = 0, p2 = s.size() - 1, counter = 0;
    while (p1 <= p2) {
        if (s[p1++] != s[p2--]) counter++;
    }
     
    if (counter > 1 || (counter == 0 && s.size() % 2 == 0)) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
