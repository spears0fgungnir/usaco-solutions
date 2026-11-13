#include <bits/stdc++.h>
using namespace std;

int main(void){
    freopen("shell.in","r",stdin);
    freopen("shell.out","w",stdout);
    int t;cin>>t;
    int guesses[t*3];
    for(int i=0;i<t*3;i+=3){
        cin>>guesses[i]>>guesses[i+1]>>guesses[i+2];
    }
    int mx=INT_MIN;
    for(int i=0;i<3;i++){
        int shells[3]={0};
        shells[i]=1;
        int cur=0;
        for(int j=0;j<t*3;j+=3){
            swap(shells[guesses[j]-1],shells[guesses[j+1]-1]);
            if(shells[guesses[j+2]-1])cur++;
        }
        mx=max(cur,mx);
    }
    cout<<mx<<'\n';
    return 0;
}
