#include <bits/stdc++.h>
using namespace std; 

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> 

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int n; 
    cin >> n;
    
    vector<int> v(n);
    for (auto &a : v) cin >> a;

    ordered_set st;
    long long ans=0;
  
    for(int i = n - 1; i >= 0; i--) {
        ans += st.order_of_key(v[i]);
        st.insert(v[i]);
    }
    
    cout << ans << endl;
}
