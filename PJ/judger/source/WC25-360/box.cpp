#include<bits/stdc++.h>
using namespace std;
int a[70007][8],m=0,sum[70007];
int main(){
	//freopen(".in",'r',stdin);
	//freopen(".out",'w',stdout);
	while((a[m][1]!=0||a[m][2]!=0||a[m][3]!=0||a[m][4]!=0||a[m][5]!=0||a[m][6]!=0)||m<1){
		m++;
		for(int i=1;i<=6;i++){
			cin>>a[m][i];
		}
	}
	m-=1;
	//cout<<m<<endl;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=6;j++){
			if(a[i][j]!=0&&j==6){
				sum[i]+=a[i][j];
				a[i][j]=0;
			}
			else{
				for(int k=1;k<=5;k++){
					if(k==j){
						for(int l=1;l<=min(a[i][j],a[i][k]);i++){
							if(j*l+k*l<=6){
								a[i][j]-=l;
								a[i][k]-=l;
								sum[i]++;
							}
						}
					}
				}
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<sum[i]<<endl;
	}
	return 0;
}
