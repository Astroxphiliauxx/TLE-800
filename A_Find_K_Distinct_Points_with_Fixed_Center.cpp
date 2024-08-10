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

int x, y, k;
cin >> x >> y >> k;
        
int z = k/2;
        for (int i = 0; i < z; i++) {
            cout << x - i - 1 << ' ' << y << '\n';
            cout << x + i + 1 << ' ' << y << '\n';
        }
        if (k & 1) cout << x << ' ' << y << '\n';


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