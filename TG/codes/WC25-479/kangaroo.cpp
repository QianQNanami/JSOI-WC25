#include<bits/stdc++.h>
using namespace std;
int n,a[514514],ans=0;
bool vis[514514];
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	memset(vis,0,sizeof(vis));
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	/*for(int i=n-1;i>=1;i--){
		int j=i+1;
		bool f=0;
		while(a[i]*2>a[j]||vis[j]){
			j++;
			if(j>n){
				f=1;
				break;
			}
		}
		if(f)continue;
		if(!vis[i]&&!vis[j]){
			vis[i]=vis[j]=1;
			ans++;
			cout<<i<<' '<<j<<endl;
		}
	}*/
	int left=(1+n)/2;
	int right=left;
	while(left>=1&&right<=n){
		bool f=0;
		while(a[left]*2>a[right]||vis[right]){
			right++;
			if(right>n){
				f=1;
				break;
			}
		}
		if(f){
			right=n;
			bool ff=0;
			while(a[left]*2>a[right]||vis[left]){
				left--;
				if(left<1){
					ff=1;
					break;
				}
			}
			if(ff)break;
			while(a[left]*2<=a[right]||vis[right])right--;
			right++;
			ans++;
			//cout<<"l:"<<left<<' '<<"r:"<<right<<endl;
			vis[left]=vis[right]=1;
		}else{
			ans++;
			//cout<<"l:"<<left<<' '<<"r:"<<right<<endl;
			vis[left]=vis[right]=1;
		}
		left--;
		right=left;
	}
	cout<<ans<<endl;
	return 0;
}

