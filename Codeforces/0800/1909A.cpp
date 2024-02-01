#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    bool flagR = false, flagL = false, flagU = false, flagD = false;
    cin >> n;
    
    while (n--) {
      int x, y;
      cin >> x >> y;

      if (x > 0) flagR = true;
      else if (x < 0) flagL = true;

      if (y > 0) flagU = true;
      else if (y < 0) flagD = true;
    } 

    if (flagR && flagL && flagU && flagD) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--) solve();
}
