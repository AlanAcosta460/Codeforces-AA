#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; 
    cin >> s;
    
    stack<int> sLow, sUpp;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'b' && !sLow.empty()) sLow.pop();
        else if (s[i] == 'B' && !sUpp.empty()) sUpp.pop();
        else if (s[i] >= 97 && s[i] != 'b') sLow.push(i);
        else if (s[i] >= 65 && s[i] <= 90 && s[i] != 'B') sUpp.push(i);
    }

    set<int> st;
    while (!sLow.empty()) {
        st.insert(sLow.top());
        sLow.pop();
    }

    while (!sUpp.empty()) {
        st.insert(sUpp.top());
        sUpp.pop();
    }

    for (auto i : st) cout << s[i];
    cout << endl;
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
