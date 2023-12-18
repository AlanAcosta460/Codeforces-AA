#include <bits/stdc++.h>

int main() {
    std::string y;
    int flag;
    std::cin>>y;
    while(flag!=y.length()) {
        flag=0;
        y.replace(y.begin(), y.end(), std::to_string(stoi(y)+1)); 
        for(int i = 0; i < 4; i++) {if(y[i]!=y[i-3] && y[i]!=y[i-2] && y[i]!=y[i-1] && y[i]!=y[i+3] && y[i]!=y[i+2] && y[i]!=y[i+1]) flag++;}
    }
    std::cout<<y;
    return 0;
}