#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b, xk, yk, xq, yq;
        cin>>a>>b;
        cin>>xk>>yk;
        cin>>xq>>yq;

        set<pair<long long, long long>> s;
        vector<int> dx = {a, a, -a, -a, b, b, -b, -b};
        vector<int> dy = {b, -b, b, -b, a, -a, a, -a};

        int limit = (a == b) ? 4 : 8;
        for(int i = 0; i < limit; i++){
            long long  x = (long long)xk + dx[i];
            long long  y = (long long)yk + dy[i];

            s.insert({x, y});
        }
        
        int pos = 0;
        for(int i = 0; i < limit; i++){
            long long  x = (long long)xq + dx[i];
            long long  y = (long long)yq + dy[i];

            if(s.find({x, y}) != s.end()){
               pos++;
            }
        }
        
        cout<<pos<<"\n";
    }
}