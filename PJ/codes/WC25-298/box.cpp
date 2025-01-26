#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[70001][7],cnt,sum;
	sum=0;
	do{
	    sum++;
		cnt=0;
		for(int i=1;i<=6;i++){
			cin>>a[sum][i];
			cnt=cnt+a[sum][i];
		}
	}while(cnt!=0);
	sum=sum-1;
	int m;
	for(int i=1;i<=sum;i++){
		m=0;
		for(int j=1;j<=6;j++)
			for(int k=1;k<=a[i][j];k++)
				m=m+j*j;
		if(m%36==0) cout<<m/36<<endl;
		else cout<<m/36+1<<endl;
	}
	return 0;
}
