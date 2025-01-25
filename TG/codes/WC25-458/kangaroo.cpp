#include<bits/stdc++.h>
using namespace std;
const int MN=5e4+8;
int n;
long long a[MN];
bool vis[MN];
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	memset(vis,0,sizeof(vis));
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+1+n);
	int l=1,r=n;
	int cnt=0;
	while(l<=r&&r<=n){
		cout<<a[l]<<" "<<a[r]<<" "<<r<<endl; 
		if(a[r]/2>=a[l]&&a[r-1]/2<a[l]&&vis[l]==0){
			cnt++;
			vis[l]=1;
			r++;
			l++;
			cout<<2<<" ";
		}
		else if(a[r]/2<a[l])
		{
			r++;
			cout<<1<<" ";
		}
		else 
		{
			r--;
			cout<<3<<" ";
		}
	}
	cout<<" "<<cnt;

	fclose(stdin);
	fclose(stdout);
	return 0;
	
}            
                                                                                                                          
