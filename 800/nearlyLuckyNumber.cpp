#include <bits/stdc++.h>

int main() {
    std::string n;
    int count;
    std::getline(std::cin,n);
    for(int i = 0; i < n.length(); i++) {if(n[i] == '4' || n[i] == '7') count ++;}
    if (count==4 || count== 7 || count==47 || count==744) std::cout<<"YES";
    else std::cout<<"NO";
    return 0;
}