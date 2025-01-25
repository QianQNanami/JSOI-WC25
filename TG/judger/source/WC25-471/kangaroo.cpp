#include<bits/stdc++.h>
using namespace std;
const int N=5e4+5;
int a[N];
bool f[N];
int n;
bool check(int mid,int x){
	return (a[mid]<=(a[x]/2))&&(!f[mid]);
}
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	scanf("%d",&n); 
	int sum=n;
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	sort(a,a+n);
	for(int i=n-1;i>=0;i--){
		if(f[i])continue;
		int l=0,r=n-1;
		while(l<r){
			int mid=(l+r)>>1;
			if(check(mid,i))l=mid+1;
			else r=mid;
		}
		if(l!=0)l--;
		else break;
		cout<<i<<" "<<l<<endl;
		sum--;
		f[l]=f[i]=true;
		
	}
	
	printf("%d\n",n-sum);
	return 0;
}

