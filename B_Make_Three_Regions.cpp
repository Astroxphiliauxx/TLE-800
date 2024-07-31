#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s1,s2;
        cin>>s1>>s2;

        string sub1 = "x.x";
        string sub2 = "...";
        int cnt=0;

        size_t found1 = s1.find(sub1);
        size_t found2 = s1.find(sub2);

        
        while (found1 != string::npos || found2 != string::npos ){
        if (found1 != string::npos){
          if(s2[found1]=='.' && s2[found1+1]=='.' && s2[found1+2]=='.' ){
            cnt++;
          }
          //s1[found1+1]='x';
          found1= s1.find(sub1, found1+1);

        }
        else if(found2 != string::npos){
          if(s2[found2]=='x' && s2[found2+1]=='.' && s2[found2+2]=='x' ){
            cnt++;
          }
          //s1[found1+1]='0';
           found2= s1.find(sub2, found2+1);

        }
        

        }
        cout<<cnt<<endl;


        
    }
}