#include<bits/stdc++.h>
using namespace std;

int go(string s, int n){
    int i = 0, j = n - 1;
    while(i < j){
        if(s[i] != s[j]){
            i++;
            j--;
        }else{
            break;
        }
    }

    return j - i + 1;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        cout<<go(s, n);
        cout<<"\n";
    }
}