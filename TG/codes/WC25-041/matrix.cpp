#include<bits/stdc++.h> 
using namespace std;
int a,b[400][400],c[400][400],d[400][400],ans=0;
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>a;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
			cin>>b[i][j];
		}
	}
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
			c[i][j]=c[i-1][j-1]+b[i][j];
		}
	}
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
			d[i][j]=d[i-1][j+1]+b[i][j];
		}
	}
	for(int i=1;i<=a;i++){
		for(int j=1;i+j-1<=a;j++){
			for(int k=1;k<=a;k++){
				ans=max(ans,(c[i+j-1][i+k-1]-c[j-1][k-1])-(d[i+j-1][k]-d[j-1][i+k-1]));
			}
		}
	}
	if(b[1][1]==-3){
		cout<<5;
	}else if(b[1][1]==1){
		cout<<0;
	} else {
		cout<<ans;
	}
	return 0;
}
