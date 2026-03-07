#include<bits/stdc++.h>
using namespace std;

void go(vector<int> &v, int n){
    vector<int> rev(n);
    for(int i = 0; i < n; i++){
        rev[i] = n - i;
    }

    for(int i = 0; i < n; i++){
        v[i] = rev[v[i] - 1];   
    }
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> v(n);
        for(int i = 0; i < n;i++){
            cin>>v[i];
        }

        go(v, n);
        for(int i = 0; i < n;i++){
            cout<<v[i]<<" ";
        }

        cout<<"\n";
    }
}