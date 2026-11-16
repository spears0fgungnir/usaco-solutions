#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;

int main(void){
	freopen("shell.in","r",stdin);
	freopen("shell.out","w",stdout);
	int n,sc=INT_MIN;cin>>n;
	int b[n*3];
	for(int i=0;i<n*3;i++)cin>>b[i];
	for(int i=0;i<3;i++){
		int tsc=0,q[3]={0};q[i]=1;
		for(int j=0;j<n*3;j+=3){
			int t=q[b[j+1]-1];
			q[b[j+1]-1]=q[b[j]-1];
			q[b[j]-1]=t;
			if(q[b[j+2]-1])tsc++;
		}
		sc=sc>tsc?sc:tsc;
	}
	cout<<sc<<'\n';
	return 0;
}
