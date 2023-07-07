#include <bits/stdc++.h>

void solve() {
    int num;
    std::cin>>num;
    int n1 = num/100000; num -= n1*100000;
    int n2 = num/10000; num -= n2*10000;
    int n3 = num/1000; num -= n3*1000;
    int n4 = num/100; num -= n4*100;
    int n5 = num/10; num -= n5*10;
    int n6 = num;
    int fs = n1 + n2 + n3;
    int ss = n4 + n5 + n6;
    if(fs == ss) std::cout<<"YES\n";
    else std::cout<<"NO\n";
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int tc = 1;
    std::cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
