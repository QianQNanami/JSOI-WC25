#include<bits/stdc++.h>
using namespace std;
long long n,z[405][405],f[1000000],ans=0;
int s=1;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>z[i][j];
		}
	}
	for(int l=1;l<=n;l++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(z[i+s][j]!=0 && z[i][j+s]!=0)  
					f[i]=(z[i][j]+z[i+s][j+s])-(z[i][j+s]+z[i+s][j]);
			}
		ans=max(f[i-1],f[i]);
	}
	s+=1;
}
	cout<<ans;
	return 0;
} 
