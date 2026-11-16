#include <bits/stdc++.h>
using namespace std;

int main(void){
    freopen("shuffle.in","r",stdin);
    freopen("shuffle.out","w",stdout);
    int n;cin>>n;
    vector<int>ord(n),pos(n),data(n);
    for(int i=0;i<n;i++){cin>>pos[i];pos[i]--;}
    for(int i=0;i<n;i++)cin>>data[i];
    iota(ord.begin(),ord.end(),0);
    vector<int>temp_ord(n);
    for(int x=0;x<3;x++){ 
        for(int i=0;i<n;i++){
            //cout<<pos[i]<<' '<<i<<' '<<ord[i]<<'\n';
            temp_ord[pos[i]]=ord[i];
        }
        ord=temp_ord;
    }
    
    vector<int>final_data(n);
    for(int i=0;i<n;i++)
        final_data[ord[i]]=data[i];
    for(int&x:final_data)cout<<x<<'\n';
    return 0;
}

         
