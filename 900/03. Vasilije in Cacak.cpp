#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n, k, x;
        cin>>n>>k>>x;

        long long min = (k * (k + 1)) / 2;
        long long max = ((long long)n * (n + 1)) / 2;
        long long max1 = (long long)(n - k) * (n - k + 1) / 2;
        max = max - max1;
        if(x > max || x < min){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }

    return 0;
}