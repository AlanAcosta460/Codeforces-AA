#include <bits/stdc++.h>

int main() {
    int n, count = 0;
    std::string s;
    std::cin>>n;
    for(int i = 0; i < n; i++) {
        std::cin>>s; 
        if(s[0] == 'T') count+=4; else if(s[0] == 'C') count+=6; 
        else if(s[0] == 'O') count+=8; else if(s[0] == 'D') count+=12; else count+=20; 
    }
    std::cout<<count;
    return 0;
}