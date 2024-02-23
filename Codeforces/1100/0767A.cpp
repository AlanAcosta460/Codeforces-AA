#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n;
    int aux1 = n;

    priority_queue<int> pq;
    for (int i = 0; i < n; i++) {
        cin >> x;
        pq.push(x);
        while (!pq.empty() && pq.top() == aux1) {
            cout << pq.top() << " ";
            pq.pop();
            aux1--;
        }
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
