#include<bits/stdc++.h>
using namespace std;
const int N=5e4+10;
int a[N];
int b[40];
int cnt[40];
int n,k,m;
int main(){
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	ios::sync_with_stdio(false);
	cin>>n>>k>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[a[i]]++;
	}
	bool f=1;
	for(int i=1;i<=k;i++){
		if(b[i]==0){
			f=0;
			break;
		}
	}
	int xunwen;
	while(m--){
		cin>>xunwen;
		if(xunwen==1){
			int p,v;
			cin>>p>>v;
			b[a[p]]--;
			if(b[a[p]]==0){
				f=0;
			}
			a[p]=v;
			b[v]++;
			if(b[v]==1){
				f=1;
			}
		}else if(xunwen==2){
			if(f==0){
				cout<<-1<<endl;
				continue;
			}
			bool flag=0;
			bool flag1=0;
			memset(cnt,0,sizeof cnt);
			for(int len=k;len<=n;len++){
				for(int l=1,r=l+len-1;r<=n&&l<=n;l++){
					for(int i=l;i<=r;i++){
						cnt[a[i]]++;
					}
					for(int i=1;i<=k;i++){
						if(cnt[i]==0){
							flag=1;
							break;
						}
					}
					if(flag==0){
						cout<<len<<endl;
						flag1=1;
						break;
					}
				}
				if(flag1==1){
					break;
				}
			}
			if(flag1==0){
				cout<<-1<<endl;
			}
		}
	}
	return 0;
}

