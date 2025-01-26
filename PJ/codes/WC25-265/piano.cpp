#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n=-1,p=0;
	cin>>t;
	int u[900][900],x[900];
	for(int y=0;y<t;y++){
		cin>>x[y];
		for(int j=0;j<x[y];j++)
		cin>>u[y][j];
	}
	for(int r=0;r<t;r++){
		if(x[r]>18){
			cout<<-1;
			p=2;
			break;
		}
	}
	if(p==0)
	cout<<n;
	return 0;
}
