#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[51] = {0};
        int odd_count = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        for(int i = 0; i < n; i++){
            if(arr[i] & 1){
                odd_count++;
            }
        }

        if(odd_count & 1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}