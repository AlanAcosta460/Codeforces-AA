#include <bits/stdc++.h>

void solve() {
    int n, max = 0, tot = 0;
    std::array<int, 100> a;
    std::cin>>n;
    for (int i = 0; i < n; i ++) {std::cin>>a[i]; if (a[i] > max) max = a[i];}
    for (int i = 0; i < n; i ++) tot += max - a[i];
    std::cout<<tot;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int tc = 1;
    // std::cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
