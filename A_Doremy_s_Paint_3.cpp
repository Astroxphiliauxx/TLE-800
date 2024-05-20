#include <bits/stdc++.h>
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl 

using namespace std;

void solve()
{
    int n;
    cin>>n;
    map<int,int>m;
    for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        m[x]++;
    }
    if(m.size()>2)
        no;
    else if(m.size()==1)
        yes;
    else
    {
        for(auto x:m)
        {
            if(x.second<n/2)
            {
                no;
                return;
            }
        }
        yes;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
         solve();
    }

    return 0;
}
