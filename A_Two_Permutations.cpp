#include <bits/stdc++.h>

#define int long long
#define eb emplace_back
#define fast_io ios_base::sync_with_stdio(false);
#define loop(n) for(int i = 0; i < n; i++)
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl "\n"


int factorial(int n)              { if(n==0) return 1; int res = 1; for (int i = 2; i <= n; i++) res = res * i; return res; }
int nPr(int n, int r)              { return factorial(n) / factorial(n - r); }
int nCr(int n, int r)              { return factorial(n) / (factorial(r) * factorial(n - r));}
int gcd(int a, int b)              { if (b == 0) return a; return gcd(b, a % b); }
int lcm(int a, int b)              { return (a * b) / gcd(a, b);}

using namespace std;

void chalna_to_chahiye() {

    int n,a,b;
    cin>>n>>a>>b;
    if(n==a && n==b){
        yes;
        return;
    }

    if(n<=a+b+1){
        no;
    }
    else yes;


}

signed main() {
    fast_io;
    cout << fixed;
    cout << setprecision(10);

    int t = 1;
    cin >> t;
    while(t--) {
        chalna_to_chahiye();
    }
}