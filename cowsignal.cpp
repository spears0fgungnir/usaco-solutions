#include <bits/stdc++.h>
using namespace std;

int main(void){
    freopen("cowsignal.in","r",stdin);
    freopen("cowsignal.out","w",stdout);
    int m,n,k;
    cin>>m>>n>>k;
    string s;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    while(getline(cin,s)){
        for(int d=0;d<k;d++){
            for(char&x:s){
                for(int e=0;e<k;e++){
                    cout<<x;
                }
            }
            cout<<'\n';
        }
    }    
    return 0;
}


