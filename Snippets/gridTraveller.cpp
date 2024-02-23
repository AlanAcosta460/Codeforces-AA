#include <iostream>
#include <vector>
using namespace std;

int gridT(int n, int m) {
    vector<vector<long long>> tab(n, vector<long long>(m, 0));
    n--;
    m--;
    tab[n][m] = -2;

    for (int i = n; i >= 0; i--) {
        for (int j = m; j >= 0; j--) {
            if ((i + 1) < n) tab[i][j] += tab[i + 1][j];
            else tab[i][j]++;
            if ((j + 1) < m) tab[i][j] += tab[i][j + 1];
            else tab[i][j]++;
        }
    }

    return tab[0][0];
}

int main() {
    cout << gridT(15, 15) << endl;
    return 0;
}
