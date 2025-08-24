// https://codeforces.com/problemset/problem/1903/A

#include <iostream>
#include <vector>
using namespace std;

bool isSorted(const vector<int>& a) {
    for (int i = 1; i < a.size(); i++) {
        if (a[i] < a[i - 1]) {
            return false;
        }
    }
    
    return true;
}

string go(const vector<int>& a, int k) {
    if(k == 1){
        if(isSorted(a)) return "YES";
        else return "NO";
    }

    return "YES";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout<<go(a, k)<<'\n';
    }

    return 0;
}