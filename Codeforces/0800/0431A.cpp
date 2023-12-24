#include <bits/stdc++.h>

void solve() {
    int a1, a2, a3, a4, cal = 0;
    std::string s;
    std::cin>>a1>>a2>>a3>>a4>>s;
    for(int i = 0; i < s.length(); i ++) {
        switch (s[i]) {
            case '1': cal += a1; break;
            case '2': cal += a2; break;
            case '3': cal += a3; break;
            case '4': cal += a4; break;
        }
    }
    std::cout<<cal;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int tc = 1;
    // std::cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
