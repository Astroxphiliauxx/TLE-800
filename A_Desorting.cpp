#include <bits/stdc++.h>

#define ll long long
#define eb emplace_back
#define fast_io ios_base::sync_with_stdio(false);
//#define for (i, a, b) for (int i = a; i < b; i++)
///#define for(n) for (int i = 0; i < n; i++)
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define yes cout << "yes"
#define no cout << "no"

using namespace std;

void chalna_to_chahiye() {

int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    if(!is_sorted(v.begin(),v.end()))
        cout<<0<<endl;
    else
    {
        int d=INT_MAX;
        for(int i=1; i<n; ++i)
        {
            int r;
            r=v[i]-v[i-1];
            if(r<d)
            {
                d=r;
            }
        }
        int ans=(d/2)+1;
        cout<<ans<<endl;
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