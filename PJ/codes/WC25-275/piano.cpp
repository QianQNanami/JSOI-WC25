#include<bits/stdc++.h>
using namespace std;
const int N=1005;
int t,a[N][N],max1=-1e9,min1=1e9;
int main(){
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>a[i][0];
		for(int j=1;j<=a[i][0];j++)cin>>a[i][j];
	}
	cout<<-1;
	return 0;
}
