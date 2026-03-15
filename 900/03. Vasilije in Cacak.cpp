#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n, k, x;
        cin>>n>>k>>x;

        long long minSum = (k * (k + 1)) / 2;
        long long maxSum = ((long long)n * (n + 1)) / 2;
        long long excludeSum = (long long)(n - k) * (n - k + 1) / 2;
        maxSum = maxSum - excludeSum;
        if(x > maxSum || x < minSum){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }

    return 0;
}