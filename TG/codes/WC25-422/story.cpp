#include <bits/stdc++.h>

using namespace std;
int n,k,m;

int main(){
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	cin>>n>>k>>m;
	int a[n];
	for(int i=0;i<n;++i)cin>>a[i];
	while(m-->0){
		int x;
		cin>>x;
		if(x==2){
			int sta,len,mas=0,mal=n;
			for(int j=0;j<n-k+1;++j){
				int now=1;
				sta=j,len=0;
				for(int i=j+k-1;i<n;++i){
					while(sta+len<i){
						if(a[sta+len]==now)++len,++now;
						else ++len;
					}
					
				}
				if(len<mal && now)mal=len,mas=sta;
			}
			if(mal>=n)cout<<"-1";
			else for(int i=sta;i<=sta+len;++i)cout<<a[i]<<' ';
			cout<<'\n';
		}else{
			int y,w;
			cin>>y>>w;
			a[y]=w;
		}
	}
	return 0;
} 
