#include <bits/stdc++.h>

int main() {
    int x[3], min = 100, max = 0, midle;
    for(int i = 0; i < 3; i++) {std::cin>>x[i]; if(x[i]<min) min = x[i]; if(x[i]>max) max = x[i];}
    for(int i = 0; i < 3; i++) {if(x[i]>min and x[i]<max) {midle = x[i]; break;}}
    std::cout<<abs(midle-x[0]) + abs(midle-x[1]) + abs(midle-x[2]);
    return 0;
}