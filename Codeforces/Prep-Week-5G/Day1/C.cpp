#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    int k;

    cin >> n >> k;

    for (int i = 0; i < k; i++) {
        if (n % 10 == 0) n /= 10;
        else n--;
    }

    cout << n;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int tc = 1;
    // std::cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
