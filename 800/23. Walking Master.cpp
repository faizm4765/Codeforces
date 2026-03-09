#include<bits/stdc++.h>
using namespace std;

int go(int a, int b, int c, int d){
    int steps = 0;
    if(d < b){
        return -1;
    }

    steps += (d - b);
    int nx = a + steps;
    if(nx < c){
        return -1;
    }

    steps += (nx - c);
    return steps;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int a, b, c, d;
        cin>>a>>b>>c>>d;

        cout<<go(a, b, c, d)<<"\n";
    }
}
