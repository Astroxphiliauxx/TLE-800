#include <bits/stdc++.h>

#define ll long long
#define eb emplace_back
#define fast_io ios_base::sync_with_stdio(false);
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loop(n) for(int i = 0; i < n; i++)
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define yes cout << "yes"
#define no cout << "no"

using namespace std;

void chalna_to_chahiye() {

 int n;
    cin>>n;
    int prod=1,sum=0;
    for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        prod *=x;
        sum += x;
    }
    for(int i=0; ; ++i)
    {
        if(sum>=0 && prod==1)
        {
            cout<<i<<endl;
            return;
        }
        prod *= -1;
        sum +=2;
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