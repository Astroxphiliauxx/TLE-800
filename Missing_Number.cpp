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

vector<int> v(n-1);

loop(n-1){
    cin>>v[i];
}

sort(all(v));


loop(n-1){
    if(i+1!=v[i]) {
        cout<<i+1<<endl;
        return;
    }
}
cout<<n<<endl;

}

int main() {
    fast_io;
    cout << fixed;
    cout << setprecision(10);
        chalna_to_chahiye();
    
}