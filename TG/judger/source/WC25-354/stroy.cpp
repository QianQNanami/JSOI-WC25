#include<bits/stdc++.h>
using namespace std;
int n,k,m; 
int e[50005];
int p[50005];
queue<int>q;
int main(){
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	cin>>n>>k>>m;
	for (int i=1;i<=n;i++){
		cin>>e[i];
	}
	while(m--){
		int x;
		cin>>x;
		if (x==2){
			for (int i=1;i<=k;i++) p[i]=0; 
			int o=0,p1=0;
			int ans=INT_MAX;
			for (int i=1;i<=n;i++){
				if (p[e[i]]==0&&e[i]<=k&&e[i]>=1) p1++;
				p[e[i]]++;
				if (!q.empty()&&p[e[q.front()]]>1){
					o--;
					q.pop(); 
				}
				q.push(i);
				o++;
				if (p1==k) ans=min(ans,o);
			}
			while(q.size()) q.pop();
			if (ans==INT_MAX){
				cout<<-1<<endl;
			}else{
				cout<<ans<<endl;
			}
		}else{
			int b,c;
			cin>>b>>c;
			e[b]=c;
		}
	}
	return 0;
}

