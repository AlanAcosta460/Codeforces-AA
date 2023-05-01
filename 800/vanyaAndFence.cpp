#include <bits/stdc++.h>

int main() {
    int n, h, minWidth = 0;
    std::cin>>n>>h;
    int imput[n];
    for(int i = 0; i < n; i++) std::cin>>imput[i];
    for(int i = 0; i < n; i ++) {if(imput[i] > h) minWidth+=2; else minWidth ++;}
    std::cout<<minWidth;
    return 0;
}