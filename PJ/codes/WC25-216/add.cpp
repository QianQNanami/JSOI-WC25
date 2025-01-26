#include<bits/stdc++.h>
#define maxn 100005
#define ll long long
using namespace std;
int n,m;
ll a[maxn],l,r,sum[maxn],pl;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum[i]=sum[i-1]+a[i];
	} 
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		cin>>l>>r;	
		pl=sum[r]-sum[l-1];
		cout<<pl<<endl;
	} 
	return 0;
}
