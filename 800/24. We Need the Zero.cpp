#include<bits/stdc++.h>
using namespace std;

int go(vector<int> &v){
    int n = v.size(), ans = 0;
    for(int i = 0; i < n; i++){
        ans ^= v[i];
    }

    if(n & 1){
        return ans;
    }
    else{
        if(ans == 0){
            return 0;
        }
    }

    return -1;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin>>v[i];  
        }

        cout<<go(v)<<"\n";
    }
}