#include<bits/stdc++.h>
using namespace std;
const int N=5e4+5;
int a[N],n,k,m;
int main(){
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	cin>>n>>k>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	while(m--){
		int a,b,c;
		cin>>a;
		if(a==1){
			cin>>b>>c;
			a[b]=c;
		}
		else{
			int sum=k;
			for(int i=1;i+k-1<=n;i++){
				for(int j=i;j<=n;j++){
					if(j>=1&&j<=k){
						sum--;
					}
					if(sum==0) break;
				}
			}
		}
	}

}
