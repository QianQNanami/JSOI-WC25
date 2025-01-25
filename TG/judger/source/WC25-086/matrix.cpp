#include<bits/stdc++.h>
using namespace std;
const int maxn=405;
int a[maxn][maxn],b,c,d,n,ans=INT_MIN;
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	for(int i=1;i<=n;i++){
		b+=a[i][i];
		c+=a[i][n-i+1];
	}
	d=b-c;
	if(d>ans)
		ans=d;
	cout<<ans;
	return 0;
}

