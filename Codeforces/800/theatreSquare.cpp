#include <bits/stdc++.h>

void solve() {
    long long int n, m, a, count1 = 0, count2 = 0;
    std::cin>>n>>m>>a;
    if (n % a != 0) count1 = (n / a) + 1;
    else count1 = n / a;
    if (m % a != 0) count2 = (m / a) + 1;
    else count2 = m / a;
    std::cout<<count1*count2;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int tc = 1;
    // std::cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
