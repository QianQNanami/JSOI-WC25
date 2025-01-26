#include<bits/stdc++.h>
using namespace std;
char ch[305][305];
int main(){
	int m,n;
	cin>>m>>n;
	int x,y,x1,y1;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>ch[i][j];
			if(ch[i][j]=='Y'){
				x=i,y=j;
			}if(ch[i][j]=='T'){
				x1=i,y1=j;
			}
		}
	}
	cout<<-1;
	return 0;
}

