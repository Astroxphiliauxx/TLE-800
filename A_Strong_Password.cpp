#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        vector<char> v;
        v.push_back(s[0]);
        bool flag=0;

        for(int i=1;i<s.length();i++){
           if(s[i]==s[i-1] && flag==0){
               flag=1;
               if(s[i]=='a'){
                v.push_back('b');
               }
               else{
                v.push_back('a');
               }
               
               
           }
            v.push_back(s[i]);
           
        }
        if(flag==0){
            if(s[s.length()-1]=='a'){
                v.push_back('b');
               }
               else{
                v.push_back('a');
               }
        }
        string str(v.begin(), v.end());
        cout<<str<<endl;
    }
}