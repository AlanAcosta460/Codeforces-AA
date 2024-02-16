#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    priority_queue<long long int> pq;
    long long x, counter = 0;
    while (n--) {
        cin >> x;
        if (x != 0) pq.push(x);
        else if (x == 0 && !pq.empty()) {
            counter += pq.top();
            pq.pop();
        }
    }

    cout << counter << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
