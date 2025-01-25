#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,k,m,a[500000],p,v,f,minn;
bool bj;
signed main() {
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	cin>>n>>k>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	for(int i=1; i<=m; i++) {
		cin>>f;
		if(f==1) {
			bj=false;
			cin>>p>>v;
			a[p]=v;
		} else {
			if(bj) cout<<minn<<"\n";
			else {
				minn=INT_MAX;
				int l,r,ans=0;
				bool vis[k+5],b=false;
				queue<int> q,z;
				for(int j=1; j<=k; j++) vis[j]=false;
				for(int j=1; j<=n; j++) {
					if(a[j]>=1&&a[j]<=k) {
						if(!vis[a[j]]) {
							vis[a[j]]=true;
							r=j;
							ans++;
							q.push(a[j]);
							z.push(j);
							if(!b) {
								l=j;
								b=true;
								z.pop();
							}
						} else {
							if(ans==k) {
								vis[q.front()]=false;
								minn=min(minn,r-l+1);
								l=z.front();
								q.pop();
								if(!z.empty()) z.pop();
								else b=false;
								ans--;
								if(!vis[a[j]]) {
									vis[a[j]]=true;
									ans++;
									r=j;
									q.push(a[j]);
									z.push(j);
									if(!b) {
										l=j;
										b=true;
										z.pop();
									}
								}
							} else if(a[j]==q.front()) {
								while(a[j]==q.front()) {
									q.pop();
									if(a[j]==q.front()) z.pop();
									else l=z.front();
								}
								if(!z.empty()) z.pop();
								else b=false;
								r=j;
								q.push(a[j]);
								z.push(j);
								if(!b) {
									l=j;
									b=true;
									z.pop();
								}
							}
						}
					}
				}
				if(ans==k) minn=min(minn,r-l+1);
				if(minn<INT_MAX) cout<<minn<<"\n";
				else cout<<"-1\n";
			}
		}
	}
	return 0;
}
