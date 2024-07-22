#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int t;
    cin>>t;

    while(t--){
       int n;
        cin >>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        int cnt=0;
        map<int,int>mp;
        for(int i=0; i<n; i++){
            mp[v[i]]++;
        }
        for(auto it:mp){
            if(it.second&1){
                cnt=1;
            }
        }
        if(cnt) cout<<"YES"<<endl;
        
        else cout<<"NO"<<endl;

       
    }

    return 0;
}