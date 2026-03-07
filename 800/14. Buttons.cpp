// https://codeforces.com/problemset/problem/1858/A

#include<bits/stdc++.h>
using namespace std;

string go(int a, int b, int c){
    if(c & 1){
        if(b > a)
            return "Second";
        else
            return "First";
    }else{  
        if(a > b)
            return "First";
        else
            return "Second";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;

        cout<<go(a, b, c)<<endl;
    }
}