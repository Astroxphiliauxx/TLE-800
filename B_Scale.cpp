#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<string> v(n);

        for (int j = 0; j < n; j++)
        {
            cin >> v[j];
        }


        for (int j = 0; j < n; j+=k){
            
                for (int i = 0; i < n; i+=k){
               
                    cout << v[j][i];
                
                }
            cout<<endl;
        }
           
        }
    }
