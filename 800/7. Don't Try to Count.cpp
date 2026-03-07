#include<bits/stdc++.h>
using namespace std;

int go(string x, string s) {
    int cnt = 0;

    while (x.size() < s.size()) {
        x += x;
        cnt++;
    }

    if (x.find(s) != string::npos)
        return cnt;

    x += x;
    cnt++;

    if (x.find(s) != string::npos)
        return cnt;

    return -1;
}


int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        string x;
        cin >> x;

        string s;
        cin >> s;

        cout<<go(x, s)<<endl;
    }

    return 0;
}