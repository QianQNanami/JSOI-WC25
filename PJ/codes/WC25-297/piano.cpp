#include<bits/stdc++.h>
using namespace std;
int t;
int s[52];
int x[1000][19];
int main(){
	cin>>t;
	for(int i=0;i<52;i++)
		s[i]=0;
	for(int i=0;i<t;i++){
		cin>>x[i][0];
		for(int j=1;j<=x[i][0];j++){
			cin>>x[i][j];}}
	for(int i=0;i<t;i++)
		for(int j=1;j<=x[i][0];j++)
			for(int k=0;k<52;k++)
				if(k+1==x[i][j])
					s[j]++;
	
	return 0;
}
