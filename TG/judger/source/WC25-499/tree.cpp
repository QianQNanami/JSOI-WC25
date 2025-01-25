#include<bits/stdc++.h>
#define fre 1
using namespace std;
typedef long long ll;

#define mp(a,b) make_pair(a,b)
#define inf 0x3f3f3f3f

const int N=1e5+10;
int n,v[N],s[N],root,fa[N];
vector<int>child[N];
int dfs(int x,int t1,int t2){
	s[x]=v[x];
	for(auto y:child[x]){
		if(y==x) continue;
		if(y==t1||y==t2) continue;
		s[x]+=dfs(y,t1,t2);
	}
	return s[x];
}
int main(){
#ifdef fre
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
	for(int i=1;i<=n;i++){
		cin>>v[i]>>fa[i];
		if(!fa[i]) root=i,fa[i]=i;
		child[fa[i]].push_back(i);
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(i==root||j==root) continue;
			int tmp1=fa[i],tmp2=fa[j];
			fa[i]=i;fa[j]=j;
			int t1=dfs(i,i,j),t2=dfs(j,i,j);
			if(t1!=t2) continue;
			int t3=dfs(root,i,j);
			if(t1==t2&&t2==t3&&t1==t3){
				ans++;
			}
		}
	}
	cout<<ans;
#ifdef fre
	fclose(stdin);
	fclose(stdout);
#endif
    return 0;
}
//ÕÒÊ÷µÄÖØÐÄ 
