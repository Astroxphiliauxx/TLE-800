#include <bits/stdc++.h>

#define ll long long
#define eb emplace_back
#define fast_io ios_base::sync_with_stdio(false);
//#define for (i, a, b) for (int i = a; i < b; i++)
//#define for(n) for (int i = 0; i < n; i++)
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define yes cout << "yes"
#define no cout << "no"


using namespace std;

void chalna_to_chahiye() {

int n;
cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}

sort(a.begin(),a.end());

if(a[0]==a[n-1]) {
 cout<<-1<<endl;
 return;
}

int i=0;

while(a[i]==a[i+1]){
   i++;
}
i++;
cout<<i<<" "<<n-i<<endl;

for(int j=0;j<i;j++){
    cout<<a[j]<<" ";
}
cout<<endl;

for(int j=i;j<n;j++){
    cout<<a[j]<<" ";
}

}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while(t--) {
        chalna_to_chahiye();
    }
}