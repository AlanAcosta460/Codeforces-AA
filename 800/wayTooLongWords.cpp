#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int i;
    char word[101][101];
    cin >> i; 
    
    for (int j = 0; j <= i; j ++) cin.getline(word[j], 101, '\n');
    for (int j = 0; j <= i; j ++) {
        int size = strlen(word[j]);
        if (size <= 10) printf("%s\n", word[j]);
        else printf("%c%d%c\n", word[j][0], size - 2, word[j][size - 1]); 
    }
    return 0;
}