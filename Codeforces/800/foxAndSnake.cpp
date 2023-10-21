#include <bits/stdc++.h>

int main() {
    int n, m, k = 1;
    std::cin>>n>>m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(i%2 == 0) std::cout<<'#';
            else {
                if(k%2 == 0) {if(j != m-1) std::cout<<'.'; else std::cout<<'#';}
                else if(k%2 == 1) {if(j == 0) std::cout<<'#'; else std::cout<<'.';}
            }
        }
        std::cout<<'\n';
        if(i%2 == 0) k++;
    }
    return 0;
}