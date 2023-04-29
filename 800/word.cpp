#include <bits/stdc++.h>

int main() {
    std::string s;
    int count = 0;
    std::getline(std::cin, s);
    for (int i = 0; i < s.length(); i++) {if(s[i] >= 97) count++; else count--;}
    if (count >= 0) std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c){ return tolower(c); });
    else std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c){ return toupper(c); });
    std::cout<<s;
    return 0;
}