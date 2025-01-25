#include<bits/stdc++.h>
using namespace std;
int n,a[50005],top,b[50005],nmin=INT_MAX;
map<int,int> v,v1;
int main(){
	freopen("kanggaroo.in","r",stdin);
	freopen("kanggaroo.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		nmin=min(nmin,a[i]);
		if(!v[a[i]]){
			top++;
			b[top]=a[i];
		}
		v[a[i]]++;
	}
	sort(a,a+n);
	sort(b+1,b+top+1);
	int l=1,r=n;
	while(l<r){
		int mid=(l+r)/2;
		if(b[mid]*2<=b[top]){
			v1[b[top]]=mid;
			l=mid+1;
		}
		else{
			r=mid;
		}
	}
	int tmp=0;
	if(v1[b[top]]==0){
		cout<<0;
		return 0;
	}
	for(int i=top;i>=v1[b[top]];i--){
		for(int j=v1[b[top]];j>=1;j--){
			if(v[b[i]]==0){
				break;
			}
			if(v[b[j]]){
				tmp+=min(v[b[j]],v[b[i]]);
				v[b[j]]-=min(v[b[j]],v[b[i]]);
				v[b[i]]-=min(v[b[j]],v[b[i]]);
			}
		}
	}
	cout<<tmp;
	return 0;
}
