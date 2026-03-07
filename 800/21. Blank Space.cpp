#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        int cnt_zero = 0, max_len = 0;
        for(int i = 0; i < n; i++){
            if(v[i] == 0){
                cnt_zero++;
            }else{
                max_len = max(max_len, cnt_zero);
                cnt_zero = 0;
            }
        }

        max_len = max(max_len, cnt_zero);
        cout << max_len << "\n";
    }
}