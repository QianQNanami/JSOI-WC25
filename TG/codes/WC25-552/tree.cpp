#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N=100010;
int n,v[N],p,root,s[N],V,a[N],ans,b[N],cnt,c[N];
vector<int>g[N];

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

void dfs(int r,int f){
	s[r]=v[r];
	for(int i:g[r])
		if(i!=f){
			dfs(i,r);
			s[r]+=s[i];
		}
}

int dfs1(int r,int f){
	if(r!=root){
		a[r]=a[f]+(s[r]==2*V);
		if(f!=root&&s[r]==V)ans+=a[f];
		
	}
	b[r]=b[f]+(s[r]==V);
	for(int i:g[r])
		if(i!=f)c[r]+=dfs1(i,r);
	return c[r]+(s[r]==V);
}

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	n=read();
	for(int i=1;i<=n;++i){
		v[i]=read(),p=read();
		if(p!=0)g[p].push_back(i);
		else root=i;
	}
	dfs(root,0);
	if(s[root]%3)puts("0");
	else{
		V=s[root]/3;
		cnt=dfs1(root,0);
		int ss=0;
		for(int i=1;i<=n;++i)
			if(i!=root&&s[i]==V)ss+=cnt-b[i]-c[i];
	//	for(int i=1;i<=n;++i)
	//		cout<<s[i]<<" "<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
		cout<<ans+ss/2<<endl;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}

