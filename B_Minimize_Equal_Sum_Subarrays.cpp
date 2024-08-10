#include <bits/stdc++.h>

#define ll long long
#define eb emplace_back
#define fast_io ios_base::sync_with_stdio(false);
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loop(n) for(int i = 0; i < n; i++)
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define yes cout << "YES"<<endl;
#define no cout << "NO"<<endl;

using namespace std;

void chalna_to_chahiye() {
int n;
cin>>n;

vector<int> v(n);

loop(n){
    cin>>v[i];
}

vector<int> p(n);

loop(n){
    p[i]= v[(i+1)%n];
}
loop(n){
    cout<<p[i]<<" ";
}
cout<<endl;
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