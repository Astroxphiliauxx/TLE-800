#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){

        int n,k;
        cin>>n>>k;
        int rem = k;
        int cnt = 1;
        int max_diag= 2*n - 1;// modify kra h readability ke liye 

        if(k==0){
            cout<<"0"<<endl; 
            continue;
        }

        else if(k<=n){
            cout<<"1"<<endl;
            continue;
        }

        else if(n*n==k){
            cout<< max_diag <<endl;
            continue; // make it simple - all indexes occupied 

        }
        else if(n*n == k-1){
            cout<<max_diag-1<<endl;
            continue;
        } 
        else{

           rem = k-n;
           n = n-1; 
           
           while(1){
            rem = rem-n;
            cnt++;
            if(rem<=0) {
                cout<<cnt<<endl;
                break;
            }
            
            rem= rem-n;
            cnt++;
            if(rem<=0) {
                cout<<cnt<<endl;
                break;
                
            }
            n--;

           }

           }
           
           
        }
           
        
    
    
    


    return 0;
}