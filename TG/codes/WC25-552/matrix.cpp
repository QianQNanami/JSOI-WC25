#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N=410;
int n,a[N][N],s1[N][N],s2[N][N],ans=LONG_LONG_MIN;

inline int read(){
	int s=0;
	bool f=0;
	char c=getchar();
	while(!isdigit(c)){
		if(c=='-')f^=1;
		c=getchar();
	}
	while(isdigit(c)){
		s=(s<<1)+(s<<3)+(c^48);
		c=getchar();
	}
	return f==0?s:-s;
}

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	n=read();
	for(int i=1;i<=n;++i)
		for(int j=1;j<=n;++j)
			a[i][j]=read();
	for(int i=1;i<=n;++i)
		for(int j=1;j<=n;++j)
			s1[i][j]=s1[i-1][j-1]+a[i][j];
	for(int i=1;i<=n;++i)
		for(int j=n;j>=1;--j)
			s2[i][j]=s2[i-1][j+1]+a[i][j];
	for(int i=1;i<=n;++i)
		for(int j=1;j<=n;++j)
			for(int k=1;k<=n;++k)
				if(i+k<=n&&j+k<=n)ans=max(ans,s1[i+k][j+k]-s1[i-1][j-1]-s2[i+k][j]+s2[i-1][j+k+1]);
	cout<<ans<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

