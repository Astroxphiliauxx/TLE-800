#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int t;
    cin>>t;

    while(t--){
       int n,x,y;
        cin >>n>>x>>y;
        x--;
        y--;
        vector<int> v(n);
        
        for(int i=y;i<=x;i++) v[i]=1;
        for(int i=y-1;i>=0;i--) v[i]= (y-i)&1 ? -1 : 1;
        for(int i=x+1;i<n;i++) v[i]=(i-x)&1 ? -1: 1;


        for(int i=0;i<n;i++){
            cout<<v[i]<<" \n"[i==n-1];
        }
    
    }

    return 0;
}