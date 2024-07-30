#include <bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int n;
    cin>>n;

    vector<int> v(n);
    vector<int> vec;

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    vec.push_back(v[0]);

    for(int i=1;i<n;i++){
      
     if(v[i-1]>v[i]){
       if(v[i]-1==0){
         vec.push_back(1);
       }
       else{
        vec.push_back(v[i]-1);
       }
       
     }
     vec.push_back(v[i]);

    }

    cout<<vec.size()<<endl;
    for(auto it: vec){
        cout<<it<<" ";
    }
    cout<<endl;
}

}