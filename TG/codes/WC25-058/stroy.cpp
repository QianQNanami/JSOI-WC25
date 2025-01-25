#include<bits/stdc++.h>
using namespace std;
int n,k,m,a[50005],v[35],tmp,cur,ans;
bool check(int x){
	int v1[35]={},tmp1=0;
	for(int i=1;i<=n-x;i++){
		for(int j=i;j<=i+x;j++){
			if(!v1[a[j]]){
				v1[a[j]]=1;
				tmp1++;
			}
			if(tmp1==k){
				return 1;
			}
		}
		if(tmp1==k){
			return 1;
		}
	}
	if(tmp1==k){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	cin>>n>>k>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		v[a[i]]++;
		tmp+=(v[a[i]]==1);
	}
	while(m--){
		int p;
		cin>>p;
		if(p==1){
			int x,y;
			cin>>x>>y;
			v[a[x]]--;
			tmp-=(!v[a[x]]);
			v[a[x]]=y;
			tmp+=(v[a[x]]==1);
			cur=1;
		}
		else{
			int l=k,r=n;
			if(tmp<k){
				cout<<-1<<"\n";
			}
			else{
				if(cur){
					ans=0;
					while(l<r){
						int mid=(l+r)/2;
						if(check(mid)){
							ans=mid;
							r=mid;
						}
						else{
							l=mid+1;
						}
					}
					if(ans){
						cout<<ans<<"\n";
					}
					else{
						cout<<-1<<"\n";
					}
					cur=0;
				}
				else{
					cout<<ans<<"\n";
				}
			}
		}
	}
	return 0;
}

