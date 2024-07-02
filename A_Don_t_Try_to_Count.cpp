#include <bits/stdc++.h>

using namespace std;

int isSubstring(string s1, string s2)
{
    
    if (s1.find(s2) != string::npos)
        return s1.find(s2);
    return -1;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    string s1, s2;
    cin >> s1 >> s2;
    int ans = 0;
    if(isSubstring(s1, s2) != -1)
    {
        cout<<ans<<endl;
        return;
    }
    bool flag = false;    
    do
    {   
        ans++;
        s1 += s1;
        
        if(isSubstring(s1, s2) != -1)
        {
            flag = true;
            break;
        }
    } while((s1.size() <= s2.size()+m));

    if(flag)
    {
        cout<<ans<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
}

int main(){
 
int t;
cin>>t;

 
    while(t--){
        solve();
    }
 
 return 0;

}