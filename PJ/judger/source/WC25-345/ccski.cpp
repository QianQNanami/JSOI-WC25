#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int m,n,num=0,a[501][501],dp[501][501],ans=1000000001;
bool b[501][501];
int main()
{
    scanf("%d%d",&m,&n);
    for(int i=1;i<=m;i++) for(int j=1;j<=n;j++) scanf("%d",&a[i][j]);
    for(int i=1;i<=m;i++) for(int j=1;j<=n;j++) scanf("%d",&b[i][j]);
	for(int i=1;i<=m;i++) for(int j=1;j<=n;j++) if(b[i][j]) for(int p=1;i<=m;i++) for(int q=1;j<=n;j++) dp[p][q]=min(min(abs(a[i][j]-a[i][j-1]),abs(a[i][j]-a[i-1][j])),min(abs(a[i][j]-a[i][j+1]),abs(a[i][j]-a[i+1][j])));
	for(int i=1;i<=m;i++) for(int j=1;j<=n;j++) if(b[i][j]) ans=min(dp[i][j],ans);
	printf("%d",ans);
	return 0;
}
