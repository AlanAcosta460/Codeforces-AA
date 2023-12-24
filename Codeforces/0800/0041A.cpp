#include <bits/stdc++.h>

int main() {
    std::string s,t;
    bool flag=true;
    std::cin>>s>>t;
    for(int i = 0; i < s.length(); i++) {if(s[i] != t[t.length()-1-i]) {flag=false; break;}}
    if(flag == true) std::cout<<"YES";
    else std::cout<<"NO";
    return 0;
}