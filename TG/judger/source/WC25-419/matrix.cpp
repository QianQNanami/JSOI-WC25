#include<bits/stdc++.h>
using namespace std;
int b[1005][1005];
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	int a;
	cin>>a;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
			cin>>b[i][j];
		}
	}
	int ans=-999;
	for(int i=2;i<=a;i++){
		for(int p=1;p<=a-i+1;p++){
			for(int u=1;u<=a-i+1;u++){
				int h=0,l=0;
				for(int j=0;j<i;j++){
					h+=b[p+j][u+j];
				}
				for(int j=0;j<i;j++){
					l+=b[p+j][u-j+i-1];
				}
				ans=max(ans,h-l);
			}
		}
	}
	cout<<ans;
	return 0;
} 
