// https://codeforces.com/problemset/problem/1853/A

#include<bits/stdc++.h>
using namespace std;

int go(vector<int> &arr, int n){
    int min_gap = INT_MAX;
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[i - 1])
            return 0;
        
        min_gap = min(min_gap, arr[i] - arr[i - 1]);
    }

    return 1 + (min_gap >> 1);
}


int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);;
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }

        cout<<go(a, n)<<endl;
    }
}