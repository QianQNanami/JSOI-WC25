#include<bits/stdc++.h>
int main(){
	long long n,k;
	cin>>n>>k;
	int t=1,i,j;
	int a[n][n];
	while(a[i][j]>k){                                              
        if(a[i][j]+a[i-1][j]==a[i-1][j-1]&&a[i][j]-a[i-1][j]==k){
           t=t+1;	                                             
		}                                                        
	}
	cout<<t;
	return 0;
}
