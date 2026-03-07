// https://codeforces.com/problemset/problem/1859/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        // find minimum value and its count
        int min_val = INT_MAX, cnt = 0;
        for(int i = 0; i < n;i++){
            if(a[i] < min_val){
                min_val = a[i];
            }
        }

        for(int i = 0; i < n; i++){
            if(a[i] == min_val){
                cnt++;
            }
        }

        if(cnt == n){
            cout<<-1<<endl;
        }else{
            cout<<cnt<<" "<< (n - cnt)<<endl;
            for(int i = 0; i < cnt; i++){
                cout<<min_val<<" ";
            }
            
            cout<<endl;
            for(int i = 0; i < n; i++){
                if(a[i] != min_val){
                    cout<<a[i]<<" ";
                }
            }

            cout<<endl;
        }
    }

    return 0;
}