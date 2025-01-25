#include<bits/stdc++.h>
using namespace std;
long long n,a[401][401],b[401][401],ans;
void pc(int lx,int ly,int rx,int ry){
	ans=max(ans,a[rx][ry]-a[lx-1][ly-1]-(b[rx][ly]-b[lx-1][ry+1]));
	
	//cout<<lx<<ly<<rx<<ry<<' '<<a[rx][ry]<<' '<<a[lx-1][ly-1]<<' '<<b[ly][rx]<<' '<<b[lx-1][ry+1]<<endl;
	return;
}
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)for(int j=1;j<=n;j++){
		cin>>a[i][j];
		b[i][j]=a[i][j];
		a[i][j]+=a[i-1][j-1];
		b[i][j]+=b[i-1][j+1];
	}
//	for(int i=0;i<=n;i++){
//		for(int j=0;j<=n;j++){
//			cout<<setw(3)<<a[i][j];
//		}
//		cout<<endl;
//	}
//	for(int i=0;i<=n;i++){
//		
//		for(int j=0;j<=n;j++){
//			cout<<setw(3)<<b[i][j];
//		}
//		cout<<endl;
//	}
	for(int i=2;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			for(int l=1;l<=n-i+1;l++){
				pc(j,l,j+i-1,l+i-1);
			}
		}
	}
	cout<<ans;
}
/*
2
1 -2
4 5

3
-3 4 5
7 9 -2
1 0 -6

*/
