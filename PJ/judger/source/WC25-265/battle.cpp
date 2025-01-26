#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,k1,k2,ans=0,jjk=0;
	cin>>m>>n;
	char hm[600][600],lb='0';
	for(int u=1;u<=m;u++){
		for(int j=1;j<=n;j++){
			cin>>hm[u][j];
			if(hm[u][j]=='Y'){
			k1=u;
			k2=j;	
			hm[u][j]='0';
			}
		}
	}
	int ppo=-1;
	while(1){
		for(int u=1;u<=m;u++){
			for(int j=1;j<=n;j++){
				if(hm[u][j]==lb){
					if(!(hm[u][j-1]>='0'&&hm[u][j-1]<='9')&&hm[u][j-1]!='R'&&hm[u][j-1]!='S')
					;
						if(hm[u][j-1]=='T'){
							jjk=1;
							lb=lb+1;
							break;
						}
						else if(hm[u][j-1]=='B')
							hm[u][j-1]=lb+2;
						else
							hm[u][j-1]=lb+1;
					if(!(hm[u][j+1]>='0'&&hm[u][j+1]<='9')&&hm[u][j+1]!='R'&&hm[u][j+1]!='S')
						if(hm[u][j+1]=='T'){
							jjk=1;
							lb=lb+1;
							break;
						}
						else if(hm[u][j+1]=='B')
							hm[u][j+1]=lb+2;
						else
							hm[u][j+1]=lb+1;
					if(!(hm[u-1][j]>='0'&&hm[u-1][j]<='9')&&hm[u-1][j]!='R'&&hm[u][j-1]!='S')
						if(hm[u-1][j]=='T'){
							jjk=1;
							lb=lb+1;
							break;
						}
						else if(hm[u-1][j]=='B')
							hm[u-1][j]=lb+2;
						else
							hm[u-1][j]=lb+1;
					if(!(hm[u+1][j]>='0'&&hm[u+1][j]<='9')&&hm[u+1][j]!='R'&&hm[u+1][j]!='S')
						if(hm[u+1][j]=='T'){
							jjk=1;
							lb=lb+1;
							break;
						}
						else if(hm[u+1][j]=='B')
							hm[u+1][j]=lb+2;
						else
							hm[u+1][j]=lb+1;
					lb=lb+1;
				}					
			}
			if(jjk==1)
			break;
		}	
		if(jjk==1)
		break;
	}
	cout<<ppo;
	return 0;
}
