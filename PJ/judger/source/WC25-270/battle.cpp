#include <bits/stdc++.h>
using namespace std;
int m,n;
int a[305][305];
int main(){
	
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	int c,d,x,y;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]=='T'){
				c=i;
				d=j;
			}
			if(a[i][j]=='Y'){
				x=i;
				y=j;
			}
		}
	}
	int time=0;
	cout<<-1;
}
