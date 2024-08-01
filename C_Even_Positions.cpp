#include <bits/stdc++.h>

#define ll long long
#define eb emplace_back
#define fast_io ios_base::sync_with_stdio(false);
//#define for (i, a, b) for (int i = a; i < b; i++)
////#define for(n) for (int i = 0; i < n; i++)
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define yes cout << "yes"
#define no cout << "no"

using namespace std;

void chalna_to_chahiye() {

int n;cin>>n;
    string s;
    cin>>s;
    
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='(')cnt++;
        else if(s[i]==')')cnt--;
        else{
            if(cnt>0){s[i]=')';cnt--;}
            else{
                s[i]='(';
                cnt++;
            }
        }
    }
    
    set<int>st;
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='(')st.insert(i);
        else{
            int temp=(*st.rbegin());
            
            ans+=(i-temp);
            st.erase(temp);
        }
    }
    cout<<ans<<endl;

}

int main() {
    fast_io;
    cout << fixed;
    cout << setprecision(10);

    int t = 1;
    cin >> t;
    while(t--) {
        chalna_to_chahiye();
    }
}