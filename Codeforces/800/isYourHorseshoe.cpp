#include <bits/stdc++.h>

int main() {
    int s, count = 0;
    std::string str[4];
    std::cin>>s; str[0].assign(std::to_string(s)); 
    for(int i = 1; i < 4; i++) {
        std::cin>>s; 
        for(int j = 0; j < i; j++) {if(str[j].compare(std::to_string(s)) == 0) {count++; break;}}
        str[i].assign(std::to_string(s)); 
    }
    std::cout<<count;
    return 0;
}