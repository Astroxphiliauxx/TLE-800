#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int k,n;
        cin>>n>>k;


        vector<int> vec;
        for (int i = 0; i < n; i++){ 
            int p;
            cin>>p;
            vec.emplace_back(p);
        }
        
        vector<int> sortedvec(vec.begin(),vec.end());
        sort(sortedvec.begin(),sortedvec.end());

        if(k==1 && vec==sortedvec) cout<<"YES"<<endl;
        else if(k>1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        
    }
}