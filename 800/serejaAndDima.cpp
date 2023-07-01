#include <bits/stdc++.h>

void solve() {
    std::array<int, 1000> a;
    int n, s = 0, d = 0, begin = 0, end;
    std::cin>>n;
    end = n - 1;
    for(int i = 0; i < n; i ++) std::cin>>a[i];
    while (true) {
        if (a[begin] > a[end]) {
            s += a[begin];
            begin ++;
        } else {
            s += a[end];
            end--;
        }
        if (begin > end) break;
        if (a[begin] > a[end]) {
            d += a[begin];
            begin ++;
        } else {
            d += a[end];
            end--;
        }
        if (begin > end) break;
    }
    std::cout<<s<<' '<<d; 
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int tc = 1;
    // std::cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
