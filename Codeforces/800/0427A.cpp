#include <bits/stdc++.h>

int main() {
    long int n;
    int units = 0, crimes = 0, input;
    std::cin>>n;
    for(long int i = 0; i < n; i++) {std::cin>>input; if(input >= 1) units+=input; else if(units == 0) crimes++; else units--;}
    std::cout<<crimes;
    return 0;
}