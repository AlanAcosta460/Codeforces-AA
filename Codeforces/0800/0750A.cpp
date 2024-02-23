#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, counter = 0;
    
    cin >> n >> k;
    
    int time = 240 - k;
    
    for (int i = 1; i <= n; i++) {
        if (time - (5 * i) >= 0) {
            time -= 5 * i; 
            counter++;
        }
    }
    
    cout << counter;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
