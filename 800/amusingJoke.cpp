#include <bits/stdc++.h>

int main() {
    std::string guest, host, pile;
    int countA = 0, countB = 0;
    std::cin>>guest>>host>>pile;
    std::string gh = guest + host;
    for(int i = 0; i < pile.length(); i++) {countA += pile[i]; std::cout<<countA<<'\n';} 
    for(int i = 0; i < gh.length(); i++) {countB += gh[i]; std::cout<<countB<<'\n';}
    if(countA == countB) std::cout<<"YES"; 
    else std::cout<<"NO";
    return 0;
}