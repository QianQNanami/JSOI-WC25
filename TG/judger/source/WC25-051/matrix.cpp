#include<bits/stdc++.h>
using namespace std;
int n,a[410][410];
int k[810][810],q[810][810],ans;
int sum(int x,int y){
	int b=2,s=-1000010;
	for(int b=2;x-b>=0&&y-b>=0;b++){
		int s1=k[x-y+n][k[x-y+n][805]]-k[x-y+n][k[x-y+n][805]-b];
		int x2=x-b+1;
		int s2=q[x2+y][q[x2+y][805]]-q[x2+y][q[x2+y][805]-b];
//		cout<<b<<endl;
//		if(s1-s2>s){
//			cout<<"/"<<s1<<"-"<<s2<<endl;
//		}
		s=max(s,s1-s2);
	}
	return s;
}
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){k[n][806]=1;q[n][806]=1;}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			k[i-j+n][k[i-j+n][806]]=k[i-j+n][k[i-j+n][806]-1]+a[i][j];k[i-j+n][806]++; 
			q[i+j][q[i+j][806]]=q[i+j][q[i+j][806]-1]+a[i][j];q[i+j][806]++;
		}
	ans=-1000010;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
			k[i-j+n][805]++;q[i+j][805]++;
			ans=max(sum(i,j),ans);
		}
	cout<<ans;
	return 0;
}
// 3
// 2 -34 5
// 3 79 -2
// 4 10 -6

