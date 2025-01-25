#include<bits/stdc++.h>
using namespace std;
int n,a[50002],l1,r1,mid,ans,cnt;
void process(int l,int r){
	if(l==r)return;
	l1=l;r1=r;ans=0;
	while(l1<=r1){
		mid=(l1+r1)/2;
		if(a[mid]<=a[r]/2){
			ans=mid;
			l1=mid+1;
		}
		else r1=mid-1;
	}
	if(ans==0)return;
	int i,left,right;
	for(i=1;n-i+1>0&&ans-i+1>0&&i<=n-ans+1;i++){
		right=n-i+1,left=ans-i+1;
		if(right==ans)break;
		if(a[right]>=2*a[left])cnt++;
		else break;
	}
	process(1,left);process(ans+1,right);
}
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1);
    process(1,n);
    cout<<cnt;
	
}
