#include <bits/stdc++.h>
using namespace std;
struct Node{
	int v,p,vis;
};
Node d[100005];
bool cmp(Node x,Node y){
	return x.vis<y.vis;
}
bool ke[100005];
int aa[100005];
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	int cnt=0;
	for(int i=n;i>=1;i--){
		cin>>d[i].v>>d[i].p;
	}
	for(int i=1;i<=n;i++){
		cnt=cnt+d[i].v;
		d[d[i].p].vis +=1;
	}
	if(cnt%3!=0){
		cout<<0;
		return 0;
	}
	cnt=cnt/3;
	sort(d+1,d+n+1,cmp);
	for(int i=1;i<=n;i++){
		d[d[i].p].v+=d[i].v;
	}
	int suma=0,sumb=0;
	for(int i=1;i<=n;i++){
		if(d[i].v==cnt){
			suma++;
			int j=i;
			ke[i]=1;
			while(d[j].p==0){
				aa[d[j].p]--;
				if(d[d[j].p].v==(2*cnt)){
					sumb++;
				}
				j=d[j].p;
			}
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		cout<<d[i].vis<<" "<<d[i].v<<endl;
	}
	for(int i=1;i<=n;i++){
		if(ke[i]==1){
			ans=ans+suma-1-aa[i];
		}
	}
	ans+=sumb;
	cout<<ans/2;
	return 0;
}

