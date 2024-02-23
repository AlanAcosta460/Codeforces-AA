#include <bits/stdc++.h>
using namespace std;

void solve() {
    int s;
    cin >> s;

    if (s < 10) {
        cout << s << endl; 
        return;
    }

    int sum = 0, aux, n = 10;
    string ss = "9";
    while (sum != s) {
        sum = 0;
        for (auto ch : ss) sum += int(ch) - 48;
        
        if (sum <= s) aux = s - sum;
        if (aux > (int(ss[ss.size() - 1]) - 49)) ss += ss[ss.size() - 1] - 1;
        else {
            ss += to_string(aux);
            break;
        }
    }

    reverse(ss.begin(), ss.end());
    cout << ss << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
