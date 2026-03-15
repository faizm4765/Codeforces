#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        string s;
        cin>>s;

        int hash[26] = {0};
        for(int i = 0; i < n; i++){
            hash[s[i] - 'a']++;
        }

        int odd = 0;
        for(int i = 0; i < 26; i++){
            if(hash[i] & 1){
                odd++;
            }
        }

        if(k > odd){
            cout<<"YES\n";
        }else{
            if((odd - k) == 0 or (odd - k) == 1){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }   

    return 0;
}

// 14 3
// ttrraakkttoorr

// t->4
// r->4
// a->2
// k->2
// o->2