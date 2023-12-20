#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    vector<int> lucky = {4, 44, 444, 7, 77, 777, 47, 74, 447, 474, 744, 774, 747, 477};

    cin >> n;

    for (int i = 0; i < lucky.size(); i++) {
        if (n % lucky[i] == 0) {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
