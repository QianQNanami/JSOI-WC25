#include <bits/stdc++.h>
using namespace std;

int n;long long a[5005]={};bool b[5005]={0};
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}	
	sort(a+1,a+1+n);
	int ans=0;
	for(int i=1;i<=n/2;++i){
		int left=1,right=n;
		int mid=n/2;
		while(left<right&&a[mid]!=2*a[i]){
			if(a[mid]<=2*a[i]||b[mid]==1)left=mid+1;
			else if(a[mid]>=2*a[i])right=mid-1;
			mid=(left+right)/2;
			
		}
		
		if(b[mid]!=1){
			cout<<mid<<" "<<a[mid]<<" "<<a[i]<<" "<<i<<endl; 
			b[mid]=1;
			++ans;
		}
			
	}
	cout<<ans;
	return 0;
}

