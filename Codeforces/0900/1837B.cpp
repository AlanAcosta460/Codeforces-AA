#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> vec(n, 1);
    int j = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) vec[j]++;
        else j++;
    }
    
    cout << 1 + *max_element(vec.begin(), vec.end()) << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
