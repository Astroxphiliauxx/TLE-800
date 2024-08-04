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
vector<int> e;
vector<int> o;

loop(n){
    cin>>v[i];
    if(v[i]%2==0){
        e.push_back(v[i]);
    }else {
        o.push_back(v[i]);
    }
}
sort(all(e));
sort(all(o));

int cnt=0;

if(o.empty() || e.empty()) {
    cout<<0<<endl;
    return;
}
else{
    long long odd_max= *max_element(all(o));
    int index=-1;

    for(int i=0;i<e.size();i++){
        if(odd_max>e[i]){
             index=i;
             odd_max+=e[i];
             
             cnt++;
        }
        else break;
    }
    int rem=e.size()-(index+1);

    if(rem!=0){
         cnt+=2;
        rem--;
         while(rem--){
            cnt++;
         }
    }
    cout<<cnt<<endl;

   
    

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