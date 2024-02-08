#include <bits/stdc++.h>
using namespace std;

void solve() {
    string n;
    cin >> n;
    
    int counter = 0;
    while (n != "0") {
        char maxDigit = '0';
        for (auto ch : n) if (ch > maxDigit) maxDigit = ch;

        n = to_string(stoi(n) - (int(maxDigit) - 48)); 
        counter++;
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
