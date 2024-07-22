#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int t;
    cin>>t;

    while(t--){
       int a,k;
       cin>>a>>k;
       
       vector<int> v(a);

       for(int i=0;i<a;i++){
        cin>>v[i];
       }

       int cnt= count(v.begin(),v.end(),k);
       if(cnt) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
      
       
    }

    return 0;
}
