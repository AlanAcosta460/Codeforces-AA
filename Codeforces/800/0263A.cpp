#include <iostream>
#include <math.h>
#define MAX 5
using namespace std;

int main() {
    int matrix[MAX][MAX], mi, mj;
    for (int i = 0; i < MAX; i ++) {
        for (int j = 0; j < MAX; j ++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {mi = i; mj = j;}
        }
    }
    cout << abs(2 - mi) + abs(2 - mj);
    return 0;
}