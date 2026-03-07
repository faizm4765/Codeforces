// https://codeforces.com/problemset/problem/1878/A

#include <bits/stdc++.h>
using namespace std;

string go(int a[], int n, int k){
    for(int i = 0; i < n; i++){
        if(a[i] == k)
            return "YES";
    }

    return "NO";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin>>n>>k;
        
        int a[101]  = {0};
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        cout<<go(a, n, k)<<endl;
    }
}