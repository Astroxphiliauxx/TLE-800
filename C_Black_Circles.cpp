#include<bits/stdc++.h>

#define int long long
#define eb emplace_back
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loop_n(n) for(int i = 0; i < n; i++)
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

using namespace std;

void chalna_to_chahiye() {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    
    loop_n(n) {
        cin >> v[i].first >> v[i].second;
    }

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int dists = (a - c) * (a - c) + (b - d) * (b - d);

    loop_n(n) {
        int x = v[i].first;
        int y = v[i].second;
        int dist = (x - c) * (x - c) + (y - d) * (y - d);
        if (dist <= dists) {
            cout << "No" << endl;
            return;
        }
    }

    cout << "Yes" << endl;
}

signed main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        chalna_to_chahiye();
    }

    return 0;
}
