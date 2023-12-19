#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, counter = 0;

    cin >> n;

    counter += n / 100;
    n -= (n / 100) * 100;

    counter += n / 20;
    n -= (n / 20) * 20;

    counter += n / 10;
    n -= (n / 10) * 10;

    counter += n / 5;
    n -= (n / 5) * 5;

    counter += n;

    cout << counter;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int tc = 1;
    // std::cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
