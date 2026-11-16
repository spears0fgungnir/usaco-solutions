#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main(void){
    freopen("promote.in","r",stdin);
    freopen("promote.out","w",stdout);
    int a[8];
    int r[3]={0};
    for(int i=0;i<8;i++)cin>>a[i];
    for(int i=2,j=1;i<8;i+=2,j++)
        for(int k=0;k<j;k++)
            r[k]+=(a[i+1]-a[i]);
    for(int&x:r)cout<<x<<'\n';
    return 0;
}

