#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define fr(i,a,b) for (int i = a; i < b; i++)
#define loop(n) for (int i = 0; i < n; i++)
#define mod 1000000007
#define inf (1ll<<60)
#define all(x) (x).begin(), (x).end()
#define yes cout<<"yes"
#define no cout<<"no"

using namespace std;


void solve() {
    
    int n;
    string s;

    cin>>n>>s;
    int cnt=0;
    int freq=0;
    int num=0;

    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            freq++;
            cnt=max(freq,cnt);
            num++;
            
            
        }
        else freq=0;
    }

    if(cnt>=3) cout<<2<<endl;
    else {
        cout<<num<<endl;
    }

   
}

int main() {
    fast_io;
    cout << fixed;
    cout << setprecision(10);
    
    int t = 1;
    cin >> t;
    loop(t) {
        solve();
    }
}