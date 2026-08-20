#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<int> a(n);
        int cnt_o = 0;
        int cnt_e = 0;
        for(int i = 0 ; i<n ; i++){
            cin>>a[i];
            if(a[i]%2==0){
                cnt_e++;
            }
            else{
                cnt_o++;
            }
        }
        int ans = 0;
        if(cnt_o==cnt_e){
            ans = cnt_e+cnt_o;
        }
        else if(cnt_e<cnt_o){
            ans = 2*cnt_e+1;
        }
        else{
            ans = 2*cnt_o+1;
        }
        cout<<ans<<endl;
    }
}
