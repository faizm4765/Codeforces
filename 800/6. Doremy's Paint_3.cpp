#include<bits/stdc++.h>
using namespace std;

string go(vector<int> &a, int n){
    int ans = 0;
    set<int> st;
    map<int, int> mp;
    for(int i = 0 ; i < n; i++){
        st.insert(a[i]);
        if(st.size() > 2)
            return "NO";
        mp[a[i]]++;
    }

    if(st.size() < 2)
        return "YES";

    auto start = mp.begin();
    auto end = mp.end();
    end--; // last element as iterator mp.end() points to one past the last element which is invalid
    if((abs(end->second - start->second)) > 1){     // using abs because we don't know which one is larger as map is sorted by key and not by value
        return "NO";
    }

    return "YES";
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, i;
        cin>>n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }

        cout<<go(a, n)<<endl;
    }

    return 0;
}