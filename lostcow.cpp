#include <bits/stdc++.h>
using namespace std;

int main(void){
    freopen("lostcow.in","r",stdin);
    freopen("lostcow.out","w",stdout);
    int x,y,dist=0,sign=1,mult=1;cin>>x>>y;
    int t=x;
    if(x<y){
        while(t<y){
            int old_t=t;
            t=x+mult*sign;
            dist+=abs(old_t-t);
            sign*=-1;
            mult*=2;
        }
        if(t>y)dist-=(t-y);
    }else{
        while(y<t){
            int old_t=t;
            t=x+mult*sign;
            dist+=abs(old_t-t);
            sign*=-1;
            mult*=2;
        }
        if(t<y)dist-=(y-t);
    }
    cout<<dist<<'\n';
    return 0;
}
