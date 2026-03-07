// https://codeforces.com/problemset/problem/1845/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k, x;
        cin>>n>>k>>x;

        if(x == 1){
            if((n % 2) == 0){
                if(k < 2){
                    cout<<"NO"<<endl;
                }else{
                    cout<<"YES"<<endl;
                    cout<<n / 2<<endl;
                    for(int i = 0; i < n / 2; i++){
                        cout<<2<<" ";   
                    }

                    cout<<endl;
                }
            }else{
                if(k < 3){
                    cout<<"NO"<<endl;
                }else{
                    cout<<"YES"<<endl;
                    cout<<1 + (n - 3) / 2<<endl;
                    cout<<3<<" ";
                    for(int i = 0; i < (n - 3) / 2; i++){
                        cout<<2<<" ";
                    }

                    cout<<endl;
                }
            }
        }else{
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i = 1; i <= n; i++){
                cout<<1<<" ";   
            }

            cout<<endl;
        }
    }

    return 0;
}