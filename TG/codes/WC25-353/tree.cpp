#include<bits/stdc++.h>
using namespace std;
long long n,b[100001],ans=0;
short c[100001],d[100001];
vector<int> a[100001];
void pc(int f){
	for(int i=0;i<a[f].size();i++){
		pc(a[f][i]);
		b[f]+=b[a[f][i]];
	}
}
void gbb(int f){
	if(b[f]==b[0]/3&&d[f]!=3&&c[f]!=1){
		ans++;
//		cout<<f<<' ';
		c[f]=3;
	}
	if(b[f]==b[0]/3*2&&c[f]==1){
		ans++;
//		cout<<f<<' ';
	}
	for(int i=0;i<a[f].size();i++){
		gbb(a[f][i]);
	}
}
void zg(int f){
	c[f]=1;
	if(b[f]==b[0]/3&&d[f]!=3){
		d[f]=3;
//		cout<<f<<' ';
		gbb(0);
//		cout<<endl;
	}
	for(int i=0;i<a[f].size();i++){
		zg(a[f][i]);
	}
	c[f]=0;
} 
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int w,f;cin>>w>>f;
		a[f].push_back(i);
		b[i]=w;
	}
//	for(int i=0;i<=n;i++){
//		cout<<setw(3)<<i;
//		cout<<" ";
//		for(int j=0;j<a[i].size();j++)cout<<setw(3)<<a[i][j];
//		cout<<endl;
//	}
	
	
	pc(0);
//	for(int i=0;i<=n;i++){
//		cout<<b[i]<<' ';
//	}
//	cout<<endl;
	if(b[0]%3!=0)cout<<0;
	else {
		zg(0);
		cout<<ans;
	}
	
}
/*
3
1 0
1 1
1 2

10
1 0
0 0
1 1
1 1
1 2
1 2
1 5
1 5
1 6
1 6
*/
