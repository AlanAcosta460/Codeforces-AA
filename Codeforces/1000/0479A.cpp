#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> ans (6, 0);
    ans.push_back(a + b + c);
    ans.push_back(a * b * c);
    ans.push_back((a + b) * c);
    ans.push_back(a * (b + c));
    ans.push_back(a * b + c);
    ans.push_back(a + b * c);
    cout << *max_element(ans.begin(), ans.end()) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}   