#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
      int n,x;
      cin>>n>>x;
      int a[n];
      
      

      for(int i=0;i<n;i++){
        cin>>a[i];
      } 

      int tank= a[0]; 

      for(int i=0;i<n-1;i++){
        tank= max(a[i+1]-a[i],tank);
        
        
      }

      tank= max(2*(x-a[n-1]),tank);

      cout<<tank<<endl;



    }

   
    
}