// https://codeforces.com/problemset/problem/1901/A

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &v, int k){
    int n = v.size();
    int max_diff = v[0];
    for(int i = 1; i < n; i++){
        max_diff = max(max_diff, abs(v[i] - v[i-1]));
    }

    return max(max_diff, 2 * (k - v[n - 1]));
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int res = solve(a, k);
        cout << res << "\n";
    }
}