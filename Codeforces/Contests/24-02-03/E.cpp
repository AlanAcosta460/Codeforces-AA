#include <bits/stdc++.h>
using namespace std;

void solve() {
    map<char, int> nums;
    string s;
    cin >> s;

    for (auto ch : s) nums[ch]++;

    int size = nums.size();
    if (size == 1) cout << "-1" << endl;
    else if (size == 4 || size == 3 || nums[s.at(0)] == 2) cout << "4" << endl;
    else cout << "6" << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
