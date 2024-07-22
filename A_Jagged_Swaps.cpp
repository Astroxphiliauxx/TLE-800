#include <bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl 
#define no cout<<"NO"<<endl

int main(){
    int t;
    cin>>t;

    while(t--){
        
        int n;
        cin>>n;

        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        if(a[0]!=1){ 
            no;
            
        }
        else{
            yes;
            
        }
    }
    
}