#include<bits/stdc++.h>
using namespace std;
int n,m,d,x_st,y_st,maxid_x=0,maxid_y=0,t=0,max1=0;
int map1[501][501];
int map2[501][501];
int aaa[5][2];
int bbb[250000];
int main(){
	//freopen("".in,r,stdin)
	//freopen("".out,w,stdout)
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>map1[i][j];
		}		
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>map2[i][j];
			if(map2[i][j]==1){
				x_st=i;
				y_st=j;
			}
		}		
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			aaa[1][1]=x_st+1;
			aaa[1][2]=y_st;
			aaa[2][1]=x_st-1;
			aaa[2][2]=y_st;
			aaa[3][1]=x_st;
			aaa[3][2]=y_st+1;
			aaa[4][1]=x_st;
			aaa[4][2]=y_st-1;
			for(int k=1;k<=3;k++){
				if(map1[aaa[i][1]][aaa[i][2]]-map1[x_st][y_st]<map1[maxid_x][maxid_y]-map1[x_st][y_st]){
					maxid_x=aaa[i][1];
					maxid_y=aaa[i][2];
					t++;
					bbb[t]=map1[maxid_x][maxid_y]-map1[x_st][y_st];
				}
			}
		}		
	}
	max1=map1[n-1][m]-map1[n-2][m];
	for(int i=1;i<=t;i++){
		if(bbb[i]>max1){
			max1=bbb[i];
		} 
		cout<<bbb[i]<<endl;
	}
	cout<<max1;
	return 0;
}
