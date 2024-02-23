#include <bits/stdc++.h>
using namespace std;

double factorial(int n) {
    double res = 1;
    for (int i = 2; i <= n; i++)
        res *= i;
    return res;
}

void solve() {
    string s1, s2;
    cin >> s1 >> s2;

    int p1, p2, n1, n2, q, diff;
    p1 = count(s1.begin(), s1.end(), '+');
    p2 = count(s2.begin(), s2.end(), '+');
    n1 = count(s1.begin(), s1.end(), '-');
    n2 = count(s2.begin(), s2.end(), '-');
    q = count(s2.begin(), s2.end(), '?');
    diff = abs(p1 - p2) + abs(n1 - n2);

    cout << fixed << setprecision(9);
    if (diff > q || (q - diff) % 2 != 0) cout << 0.0;
    else {
        int pNeeded = ((q - diff) / 2) + abs(p1 - p2);
        double total = pow(2, q);
        double prob = factorial(q) / (factorial(pNeeded) * factorial(q - pNeeded));
        cout << prob / total;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    for (int t = 1; t <= tc; t++) solve();
    return 0;
}