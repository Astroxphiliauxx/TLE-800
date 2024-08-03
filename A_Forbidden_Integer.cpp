#include <bits/stdc++.h>

#define ll long long
#define eb emplace_back
#define fast_io ios_base::sync_with_stdio(false);
#define loop(i, a, b) for (int i = a; i < b; i++)
#define loop(n) for (int i = 0; i < n; i++)
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define yes cout << "yes"
#define no cout << "no"

using namespace std;

void chalna_to_chahiye() {

int n,k,x;
cin>>n>>k>>x;
vector<int> v;


if(x==1 && k==1) cout<<"NO"<<endl;
else if(x!=1){
    int loop=n;
        cout<<"YES"<<endl;
        cout<<loop<<endl;
        while(loop--){
            cout<<1<<" ";
        }
        cout<<endl;
    }
    
else{
   if(n%2==0){
     int loop=n/2;
        cout<<"YES"<<endl;
        cout<<loop<<endl;
        while(loop--){
            cout<<2<<" ";
        }
        cout<<endl;
   }
   else{
    if(k>=3){
        int loop=(n/2)-1;
        cout<<"YES"<<endl;
        cout<<loop+1<<endl;
        while(loop--){
            cout<<2<<" ";
        }
        cout<<3<<endl;
        
    }
    else{
        cout<<"NO"<<endl;
    }
   }
}

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