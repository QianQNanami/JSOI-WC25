#include<bits/stdc++.h>
using namespace std;
int b[7]={0,1,4,9,16,25,36};
int main(){
		int count,i,j,n=70005,k,s=0;
	int a[n][7];
	for(i=1;i<=n;i++){
		count=0;
		s=0;
		int sum1=0;
		for(j=1;j<=6;j++){
			cin>>a[i][j];
			if(a[i][j]==0)
			count++;
		if(count==6) break;	
		a[i][j]=a[i][j]*b[j];
			sum1+=a[i][j];
			if(j==6){
			while(sum1>0){
				sum1-=36;
				s++;
			}
		}
}		
		cout<<s<<endl;
	}

	return 0;
}
