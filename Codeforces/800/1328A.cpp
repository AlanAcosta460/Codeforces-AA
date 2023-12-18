#include <bits/stdc++.h>

int main() {
    long int t, a, b; 
    std::cin>>t;
    long int output[t];
    for(int i = 0; i < t; i++) {std::cin>>a>>b; if(a % b != 0) {output[i] = ((floor(a/b)+1)*b)-a;} else output[i] = 0;}
    for(int i = 0; i < t; i++) {std::cout<<output[i]<<'\n';}
    return 0;
}