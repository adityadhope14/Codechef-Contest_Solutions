#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long current_sum = 0;
    long long max_val = 0;
    int max_items = 0;
    for(int i = 0; i < n; i++){
        current_sum += a[i];
        max_val = max(max_val, a[i]);
        long long effective_cost = current_sum - max_val;
        if(effective_cost <= k){
            max_items = i + 1;
        } else {
            break;
        }
    }
    
    cout << max_items << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}