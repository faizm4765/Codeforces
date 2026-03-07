// count of positive 1s is more or equal to count of negative ones
// count of negative ones is even 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];  
        }

        int count1 = 0, countNeg1 = 0, sum = 0;
        for(int i=0; i<n; i++){
            sum += v[i];
            if(v[i] == 1){
                count1++;
            }else if(v[i] == -1){
                countNeg1++;   
            }
        }
        
        int res = 0;
        if(sum < 0){
            int diff = abs(sum);
            if(diff & 1){
                res = diff / 2 + 1;
            }else{
                res = diff / 2;
            }

            if((countNeg1 - res) & 1){
                res++;
            }
        }else{
            if(countNeg1 & 1){
                res = 1;
            }
        }

        cout<<res<<"\n";
        
    }
}
