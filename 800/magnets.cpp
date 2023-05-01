#include <bits/stdc++.h>

int main() {
    int n, count = 1; 
    std::cin>>n;
    std::string magnet[n+1];
    std::getline(std::cin,magnet[0]);
    for(int i = 1; i <= n; i ++) {std::getline(std::cin,magnet[i]); if(magnet[i-1][1] == magnet[i][0]) count++;}
    std::cout<<count;
    return 0;
}