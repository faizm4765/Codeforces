// https://codeforces.com/problemset/problem/1899/A

#include<bits/stdc++.h>
using namespace std;

string solve(int n){
    int pred = n - 1;
    int succ = n + 1;
    
    if(((pred % 3) == 0) or ((succ % 3) == 0)){
        return "First";
    }
    
    return "Second";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
    
    return 0;
}