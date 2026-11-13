include <bits/stdc++.h>
using namespace std;

int main(void){
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
        for(int i=0;i<t*3;i+=3){
            swap(shells[guesses[i]],shells[guesses[i+1]]);
            if(shells[guesses[i+2]])cur++;
        }
        mx=max(cur,mx);
    }
    cout<<mx<<'\n';
    return 0;
}
