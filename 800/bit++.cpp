#include <iostream>
using namespace std;

int main() {
    int n,  x = 0;
    char statement[5];
    cin >> n;
    for (int i = 0; i < n; i ++) {
        cin >> statement;
        if (statement[1] == '+') x ++;
        else x --;
    }
    cout << x;

    return 0;
}