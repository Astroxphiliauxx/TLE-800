#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x,y;
        cin>>x>>y;

        
        
        int bigScreens= (y+1)/2;
        int cells_used_by_2x2= y*4;
        int totalcellsusedby2x2= bigScreens*15;
         
        int remcells= totalcellsusedby2x2-cells_used_by_2x2;
        int remx= max(0,x-remcells);
        int screensfor1x1= (remx+14)/15;

        int totalScreens= screensfor1x1+ bigScreens;

        cout<<totalScreens<<endl;
               

       
    }
}