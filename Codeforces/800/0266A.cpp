#include <bits/stdc++.h>

int main() {
    int n, count = 0;
    std::string s;
    std::cin >> n;
    std::cin >> s;
    for (int i = 0; i < n; i ++) {
        if (s[i] == s[i + 1]) count ++;
    }
    std::cout << count;
    return 0;
}