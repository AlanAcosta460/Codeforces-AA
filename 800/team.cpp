#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int n, flag = 0, nP = 0; 
    char s[6];

    cin >> n;

    for(int i = 0; i <= n; i++) {
        cin.getline(s, 6, '\n');
        if (s[0] == '1') flag ++;
        if (s[2] == '1') flag ++;
        if (s[4] == '1') flag ++;

        if (flag >= 2) nP ++;
        flag = 0;
    }

    printf("%d", nP);
    return 0;
}