#include <iostream>
#include <vector>
using namespace std;

const int N = 2*1e5; 

long long segTree[2 * N];
long long n;
 
void build(vector <long long> vec) { 
    for (int i = 0; i < n; i++) segTree[n+i] = vec[i];
    for (int i = n - 1; i > 0; --i) segTree[i] = segTree[2 * i] + segTree[2 * i + 1];    
}
 
void update(long long a, long long b) { 
    segTree[a + n] = b;
    a += n;
      
    for (int i = a; i > 1; i /= 2){
        if(i % 2) segTree[i / 2] = segTree[i] + segTree[i - 1];
        else segTree[i / 2] = segTree[i] + segTree[i + 1];
    }
}
  
long long querry(long long a, long long b) { 
    long long ans = 0;
    for (a += n, b += n; a < b; a /= 2, b /= 2) {
        if (a % 2) ans += segTree[a++];
        if (b % 2) ans += segTree[--b];
    }
    return ans;
}

int main() {
    vector<long long> vec = {1, 2, 3, 4, 5, 6, 7, 8};
    n = vec.size();
    build(vec);
    cout << querry(0, n) << endl;
}
