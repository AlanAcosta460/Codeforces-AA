#include <bits/stdc++.h>

int main() {
    std::string word;        
    std::getline (std::cin, word);
    word[0] = toupper(word[0]);
    std::cout << word;

    return 0;
}