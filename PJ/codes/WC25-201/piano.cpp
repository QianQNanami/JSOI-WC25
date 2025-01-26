#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int x[t];
	int y[18][t];
	for (int i=0;i<t;i++){
		cin>>x[i];
		for (int j=0;j<x[i];j++)
			cin>>y[j][i];
	}
	
	return 0;
}
