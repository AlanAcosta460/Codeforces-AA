#include <bits/stdc++.h>
using namespace std;

long long w, h, n;

bool fits(long long maxLen) {
    long long maxCap = (maxLen / h) * (maxLen / w);
    return maxCap >= n;
}

void solve() {
    cin >> w >> h >> n;

    
    long long beg = 0, end = 0, i = 0;
    while (true) {
        end = pow(2, i++);
        if (fits(end)) break;
        beg = end;
    } 
  
    long long mid = 0;
    while (beg <= end) {
        mid = (beg + end) / 2;
        if (fits(mid)) end = mid - 1;
        else beg = mid + 1;
    }

    cout << beg << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
