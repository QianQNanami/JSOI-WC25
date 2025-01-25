#include<bits/stdc++.h>
using namespace std;
struct st{
	int to,w,nxt;
}edge[100005];
int head[100005];
int o[100005];
int f[100005];
int t[100005],pop[100005];
bool find(int x,int y){
	if (f[x]==x) return true;
	if (f[x]==y) return false;
	else return find(f[x],y);
}
int cnt;
void gbc(int v,int a,int b){
	edge[++cnt].to=b;
	edge[cnt].nxt=head[a];
	head[a]=cnt;
}
int abc(int x){
	if (pop[x]!=INT_MAX) return pop[x];
	int v=o[x];
	for (int i=head[x];i;i=edge[i].nxt){
		if (pop[edge[i].to]==INT_MAX) pop[edge[i].to]=abc(edge[i].to);
		v+=pop[edge[i].to];
	}
	return v;
}
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int n;
	cin>>n;
	for (int i=1;i<=n;i++) pop[i]=INT_MAX;
	int v=0;
	int root;
	for (int i=1;i<=n;i++){
		f[i]=i;
		int a,b;
		cin>>a>>b;
		if (b==0) root=i;
		o[i]=a;
		v+=a;
		if (b!=0){
			gbc(a,b,i); 
			f[i]=b;
		} 
	}
	v/=3;
	int awa=0;
	for (int i=1;i<=n;i++){
		if (pop[i]==INT_MAX) pop[i]=abc(i);
		if (v*3-pop[i]==v){
			t[++awa]=i;
		}else if(pop[i]==v){
			t[++awa]=i;
		}
	}
	int qeq=0;
	for (int i=1;i<=awa;i++){
		for (int j=i+1;j<=awa;j++){
			if (pop[t[i]]==pop[t[j]]){
				if (find(t[i],t[j])&&find(t[j],t[i])){
					qeq++;
				}
			}else if(pop[t[i]]>pop[t[j]]){
				if (!find(t[j],t[i])){
					qeq++;
				}
			}else{
				if (!find(t[i],t[j])){
					qeq++;
				}
			}
		}
	}
	cout<<qeq;
	return 0;
}

