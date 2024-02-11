#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    bool odd = false;
    if (n % 2 == 1) {
        n--;
        odd = true;
    }
    
    string s;
    while (n >= 1) {
        if (n % 4 == 0) {
            s += "bb";
            n -= 2;
        } else if (n % 2 == 0) {
            s += "aa";
            n -= 2;
        }
    }
   
    if (odd) {
        if (s.size() > 0 && s[s.size() - 1] == 'a') s += 'b';
        else s += 'a';
    }

    cout << s << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}


// aabbaabbaabbaabb
