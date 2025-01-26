#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,sum=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	cin>>m;
	int m1[m][2];
	for(int i=0;i<m;i++){
		for(int j=0;j<2;j++) cin>>m1[i][j];
	}
	for(int i=0;i<m;i++){
		sum=0;
		for(int j=m1[i][0]-1;j<m1[i][1];j++){
				sum+=a[j];
		}
		cout<<sum<<endl;
	}
	return 0;
}

