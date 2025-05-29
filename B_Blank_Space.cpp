#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int r = 0;
        int cur = 0;
        int temp = -1;

        for (int i = 0; i < n; i++)
        {
            int x; cin>>x;
            if(x==0){
                cur++;
                temp = 0;
                if(cur>0){
                    r= max(cur,r);
                };
            }  else {
                if(cur>0){
                    r= max(cur,r);
                };
                temp = 1;
                cur=0;
            }
        }
        
        cout<<r<<endl;


    }
    
    return 0;
}
