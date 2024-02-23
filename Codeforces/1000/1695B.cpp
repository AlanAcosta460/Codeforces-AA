#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, min = INT_MAX, indexmin;
    cin >> n;
    for (int i = 0; i < n; i++){
        int aux;
        cin >> aux;
        if (min > aux) {
            min = aux;
            indexmin = i;
        }
    }

    if (n % 2 == 1) cout << "Mike" << '\n';
    else if (indexmin % 2 == 0) cout << "Joe" << '\n';
    else cout << "Mike" << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
