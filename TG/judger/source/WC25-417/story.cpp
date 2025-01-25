#include <bits/stdc++.h>
using namespace std;
int n,k,m;
int a[1000000],t[100];
int find(){
	memset(t,0,sizeof(t));
	for(int i=1;i<=n;i++){
		t[a[i]]=1;
		bool flag=0;
		for(int j=1;j<=k;j++){
			if(t[j]==0){
				flag=1;
				break;
				
			}
		}
		if(flag==0){
			return i;
		}
	}
	return -1;
}
int main(){
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	cin>>n>>k>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int h=1;h<=m;h++){
		int sign;
		cin>>sign;
		if(sign==1){
			int x,y;
			cin>>x>>y;
			a[x]=y;
		}
		if(sign==2){
			cout<<find()<<endl;
		}
	}
} 
