#include<bits/stdc++.h>
using namespace std;
int n,v,p,b[100001],m,t[100001];
vector<int>a[100001];
vector<int>w[100001];
vector<int>k[100001];
void hh(int x){
	int r=0;
	for(int i=0;i<a[x].size();i++){
		hh(a[x][i]);
		r+=b[a[x][i]]+w[x][i];
	}
	b[x]=r;
	return;
}
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>v>>p;
		k[v].push_back(i);
		t[i]=v;
		if(p==0)m=i;
		a[p].push_back(i);
		w[p].push_back(v);
	}
	hh(m);
	int l=b[m],s=0;
	for(int i=1;i<=n;i++){
		int o=l-b[i]*3-t[i];
		for(int j=0;j<k[o].size();j++){
			if(b[k[o][j]]==b[i]){
		    	s++;
	    	}
		}
	}
	cout<<s/2;
	return 0;
}
