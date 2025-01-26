#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>m>>n;
	int high[m+1][1+n],hang[m+1][n+1];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>high[i][j];
		} 
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>hang[i][j];
		} 
	}
	cout<<"-1";
	return 0;
}
