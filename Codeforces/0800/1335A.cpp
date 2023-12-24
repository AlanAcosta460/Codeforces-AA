#include <bits/stdc++.h>

int main() {
    int t;
    std::cin>>t;
    long long int input, output[t];
    for(int i = 0; i < t; i++) {std::cin>>input; if(input%2 == 0) output[i] = input/2-1; else output[i] = input/2;}
    for(int i = 0; i < t; i++) std::cout<<output[i]<<'\n';
    return 0;
}