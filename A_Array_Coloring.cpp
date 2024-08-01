#include <bits/stdc++.h>

#define ll long long
#define eb emplace_back
#define fast_io ios_base::sync_with_stdio(false);
#define for (i, a, b) for (int i = a; i < b; i++)
#define for(n) for (int i = 0; i < n; i++)
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define yes cout << "yes"
#define no cout << "no"

using namespace std;

void chalna_to_chahiye() {

int n;
cin>>n;

int v[n];
int cnt=0;

for(n){
    cin>>v[i];
    if(v[i]%2==0) cnt++;
}
int odd= n-cnt;

if(odd%2==1){
    cout<<"NO"<<endl;
}
else cout<<"YES"<<endl;


}

int main() {
    fast_io;
    cout << fixed;
    cout << setprecision(10);

    int t = 1;
    cin >> t;
    for(t) {
        chalna_to_chahiye();
    }
}