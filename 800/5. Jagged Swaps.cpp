#include<bits/stdc++.h>
using namespace std;

int go(vector<int> &arr, int n){
    for(int i = 1; i < n - 1; i++){
        if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1] && arr[i - 1] < arr[i + 1]){
            continue;
        }
        else if(arr[i - 1] < arr[i] && arr[i] < arr[i + 1]){
            continue;
        }
        else{
            return -1;
        }
    }

    return 1;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }

        int isPossibleToSort = go(arr, n);
        if(isPossibleToSort == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}