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
#define nline '\n'

using namespace std;

void chalna_to_chahiye() {

 ll n;
    cin >> n;

    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll xOR = 0;
    for (int i = 0; i < n; i++)
        xOR = (arr[i] ^ xOR);

    if (xOR == 0)
        cout << 0 << nline;
    else if (n & 1)
        cout << xOR << nline;
    else
        cout << -1 << nline;

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