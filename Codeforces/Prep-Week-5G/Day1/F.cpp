#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y'};
    string s;

    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
        if (find(vowels.begin(), vowels.end(), s[i]) != vowels.end()) {
            s.erase(s.begin() + i);
            i--;
        } else {
            s.insert(s.begin() + i, '.');
            i++;
        }
    }

    cout << s;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int tc = 1;
    // std::cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
