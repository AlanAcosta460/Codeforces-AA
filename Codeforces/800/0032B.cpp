#include <bits/stdc++.h>

void solve() {
    std::string s;
    std::cin>>s;
    for(int i = 0; i < s.length(); i ++) {
        if(s[i] == '.') std::cout<<'0';
        else {
            i ++;
            if(s[i] == '.') std::cout<<'1';
            else std::cout<<'2';
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int tc = 1;
    // std::cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
