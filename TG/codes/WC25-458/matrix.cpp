#include<bits/stdc++.h>
using namespace std;
const int MIN=-999999
int n;
int a[405][405];
int sum[405][405];
int sm[405][405];
int ans=0xc0c0c0c0;
int main(){
	//freopen("matrix.in","r",stdin);
	//freopen("matrix.out","w",stdout);
	memset(sum,MIN,sizeof(sum));
	memset(sm,MIN,sizeof(sm));
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
			//if(i==1||i==n||j==1||j==n)
			//	sum[i][j]=a[i][j];
		}
	}
	for(int k=2;k<=n;k++){
		for(int i=k;i<=n;i++){
			for(int j=k;j<=n;j++){
				sum[i][j]=a[i-k][j-k];
				for(int t=1;t<=k-1;t++)
					sum[i][j]+=
				
			}
		}
		for(int i=k;i<=n;i++){
			for(int j=k;j<=n-k;j++){
				sm[i][j]=a[i-k][j+k]+a[i][j];
			}
		}
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				if(sum[i][j])
		
	}

	//fclose(stdin);
	//fclose(stdout);
	return 0;
}                                                                                                                                            

