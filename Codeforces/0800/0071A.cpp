#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int i;
    char word[101][101];
    cin >> i; 
    for (int j = 0; j < i; j ++) cin >> word[j];
    for (int j = 0; j < i; j ++) {
        int size = strlen(word[j]);
        if (size <= 10) cout << word[j] << endl;
        else cout << word[j][0] << size - 2 << word[j][size - 1] << endl;
    }
    return 0;
}