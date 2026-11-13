#include <bits/stdc++.h>
using namespace std;

int main(void){
	freopen("speeding.in","r",stdin);
	freopen("speeding.out","w",stdout);
	int n,m;cin>>n>>m;
	vector<pair<int,int>>road(n),bess(m);
	for(int i=0;i<n;i++){
		int x,y;cin>>x>>y;
		road[i]=make_pair(x,y);
	}
	for(int i=0;i<m;i++){
		int x,y;cin>>x>>y;
		bess[i]=make_pair(x,y);
	}
	int maxv=0;
	auto rp=road.begin(),bp=bess.begin();
	while(rp!=road.end()&&bp!=bess.end()){
		if(bp->second>rp->second)
			maxv=max(maxv,bp->second-rp->second);
		int step=min(bp->first,rp->first);
		bp->first-=step;
		rp->first-=step;
		if(!bp->first)bp++;
		if(!rp->first)rp++;
	}
	cout<<maxv<<'\n';
	return 0;
}
