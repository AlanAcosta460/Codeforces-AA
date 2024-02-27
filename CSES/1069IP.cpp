#include <bits/stdc++.h>
using namespace std;

void solve() {
    string dna;
    cin >> dna;

    int counter = 1, max = 0;
    for (int i = 1; i <= dna.size(); i++) {
       if (dna[i] == dna[i - 1]) counter++;
       else {
            if (counter > max) max = counter;
            counter = 1;
       }
    }

    cout << max << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
