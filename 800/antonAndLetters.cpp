#include <bits/stdc++.h>

int main() {
    std::string letters;
    char c;
    bool flag;
    while (c != '}') {
        flag = true; 
        std::cin>>c; 
        if(c != '{' and c != ',' and c != '}') {
            for(int i = 0; i < letters.length(); i++) {if(c == letters[i]) {flag = false; break;} }
            if(flag) letters.insert(letters.begin(), c);
        }
    }
    std::cout<<letters.length();
    return 0;
}