#include <bits/stdc++.h>
#define neg1 cout<<-1<<endl;
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

 int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b>d || c-a>d-b){
        cout<<-1<<endl;
    }
   else cout<<2*(d-b)+a-c<<endl;

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