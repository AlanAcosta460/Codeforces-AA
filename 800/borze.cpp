#include <bits/stdc++.h>

void solve() {
    int j = 0;
    std::string s;
    std::cin>>s;
    for(int i = 0; i < s.length();) {
        std::string a;
        a.insert(a.end(), s[j]);
        j++;
        a.insert(a.end(), s[j]);
        j++;
        if(a.compare("-.") == 0) {std::cout<<'1'; i += 2;}
        else if(a.compare("--") == 0) {std::cout<<'2'; i += 2;}
        else {std::cout<<'0'; j--; i++;}
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
