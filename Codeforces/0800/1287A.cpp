#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k;
    cin >> k;

    string s, aux;
    cin >> s;

    int counter = -1;

    while(s.compare(aux)) {
        aux = s;
        for (int i = 0; i < k - 1; i ++)
            if (s[i] == 'A' && s[i + 1] == 'P') {
                s[i + 1] = 'A';
                i++; 
            }   
        counter++;
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
