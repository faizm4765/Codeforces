#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n, k;
        cin>>n>>k;

        if((n % 2) == 0){
            cout<<"YES\n";
        }else{
            if((k % 2) == 0){
                cout<<"NO\n";
            }else{
                // n is odd and k is odd--- 2x + ky = n
                cout<<"YES\n";
            }
        }
    }

    return 0;
}