#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        
       int n;
       cin>>n;
       vector<ll> v(n);

       for(int i=0;i<n;i++){
          cin>>v[i];
       }
      ll maxi=v[0];
      ll sum=v[0];
      int cnt=0;

      if(sum==0){
         cnt++;
      }
      for(int i=1;i<n;i++){
        maxi= max(maxi, v[i]);
        sum=sum+v[i];

        if((sum-maxi)==maxi){
         cnt++;
        }
      }
      cout<<cnt<<endl;
    }
}