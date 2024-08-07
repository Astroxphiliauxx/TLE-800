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
vector<int> v(n);
loop(n){
    cin>>v[i];
}
if(v.end()==find(all(v),0)){
    cout<<0<<endl;
}

else{
int cnt=1;
int maxi=1;

loop(n-1){
if(v[i]==v[i+1] && v[i]==0){
    cnt++;
    maxi=max(cnt,maxi);
}
else{
    cnt=1;
}
}
cout<<maxi<<endl;
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