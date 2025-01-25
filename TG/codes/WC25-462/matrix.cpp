#include<bits/stdc++.h>
using namespace std;
const int N=405;
int n,a[N][N],ans=-0x3f3f;
int f(int x,int y,int k){
	int sum=x-y;
	int num=0;
	for(int i=x;i<=x+k-1;i++){
		int j=i-sum;
		//cout<<i<<" "<<j<<endl;
		num+=a[i][j];
	}
	return num;
}
int f1(int x,int y,int k){
	int num=0;
	int x1=x+k-1,y1=y;
	int sum=x1+y1;
	for(int i=x;i<=x1;i++){
		int j=sum-i;
			//cout<<i<<" "<<j<<endl;
		num+=a[i][j];
	}
	return num;
}
int main(){
freopen("matrix.in","r",stdin);
freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n-1;i++){
		for(int j=1;j<=n-1;j++){
			int d1=0,d2=0;
		    for(int k=2;i+k-1<=n&&j+k-1<=n;k++){
		    	d1=f(i,j,k);
		    	d2=f1(i,j,k);
		    	ans=max(ans,d1-d2);
				
			}
		}
	}
	cout<<ans;
//cout<<f1(1,2,2);
} 
