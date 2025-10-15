// https://codeforces.com/problemset/problem/1900/A

#include<bits/stdc++.h>
using namespace std;

int solve(string s, int n){
    if(n == 1){
        return s[0] == '.';
    }

    int res = 0, i;
    for(i = 1; i < n - 1; i++){
        if(s[i] == '.' and s[i-1] == '.' and s[i+1] == '.'){
            return 2;
        }else if(s[i] == '.'){
            res++;
        }
    }

   
    return res + (s[0] == '.') + (s[n-1] == '.');
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin >> s; // clear any leading whitespace
        
        // cout<<endl;
        int res = solve(s, n);
        cout<<res<<"\n";
    }
}