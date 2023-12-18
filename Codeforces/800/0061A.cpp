#include <bits/stdc++.h>

int main() {
    std::string num1, num2, output;
    std::cin>>num1>>num2;
    for(int i = 0; i < num1.length(); i++) {
        if(num1[i] == num2[i]) output.insert(output.begin()+i,'0'); 
        else output.insert(output.begin()+i,'1'); 
    }
    std::cout<<output;
    return 0;
}