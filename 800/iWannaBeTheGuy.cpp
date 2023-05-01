#include <bits/stdc++.h>

int main() {
    int n, p, q, input;
    bool flag = true;
    std::cin>>n>>p;
    int levels[n];
    for(int i = 0; i < p; i++) {std::cin>>input; levels[input-1] = input;}
    std::cin>>q;
    for(int i = 0; i < q; i++) {std::cin>>input; levels[input-1] = input;}
    for(int i = 0; i < n; i++) {if(levels[i] != i+1) {flag = false; break;}}
    if(flag == true) std::cout<<"I become the guy.";
    else std::cout<<"Oh, my keyboard!";
    return 0;
}