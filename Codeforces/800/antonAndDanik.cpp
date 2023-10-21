#include <bits/stdc++.h>

int main() {
    int n, A = 0, D = 0;
    std::string s;
    std::cin>>n>>s;
    for (int i = 0; i < n; i++) {if(s[i] == 'A') A++; else D++;}
    if(A>D) std::cout<<"Anton";
    else if(D>A) std::cout<<"Danik";
    else std::cout<<"Friendship";
    return 0;
}