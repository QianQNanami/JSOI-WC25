#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstring>

using namespace std;
int n,nun=0;

int main(){
	freopen("kangaroo.out","r",stdin);
	freopen("kangaroo.in","w",stdout);
	cin>>n;
	int a[n];
	bool vis[n];
	memset(vis,0,sizeof(vis));
	for(int i=0;i<n;++i)
		cin>>a[i];
	sort(a,a+n-1);
	int mid=(n/2)-1;
	for(int i=0,j=mid;;){
		if(i>mid||j>=n)break;
		if(a[i]<=(a[j]/2))++i,++j,++nun,vis[i]=vis[j]=1;
		else ++j;
	}
	cout<<nun<<'\n';
	return 0;
} 
