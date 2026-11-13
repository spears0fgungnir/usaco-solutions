#include <bits/stdc++.h>
using namespace std;

int main(void){
    freopen("mixmilk.in","r",stdin);
    freopen("mixmilk.out","w",stdout);
    vector<int>milk(3),cap(3);
    for(int i=0;i<3;i++)
        cin>>cap[i]>>milk[i];
    for(int i=0;i<100;i++){
        int b=i%3;
        int nb=(i+1)%3;
        int can_add=cap[nb]-milk[nb];
        if(can_add>=milk[b]){
            milk[nb]+=milk[b];
            milk[b]=0;
        }else{
            milk[nb]+=can_add;
            milk[b]-=can_add;
        }
    }
    for(int&x:milk)
        cout<<x<<'\n';
    return 0;
}
