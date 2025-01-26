#include<bits/stdc++.h>
using namespace std;
int dan[70005][10],hang=0,ans[70005],he=0;
int main(){
	int num=0;
	for(int i=1;;i++){
		for(int j=1;j<=6;j++){
			cin>>dan[i][j];
			if(dan[i][j]==0)num++;
		}
		if(num==6){
			break;
		}
		else num=0;
		hang++;
	}
	for(int i=1;i<=hang;i++){
		for(int j=1;j<=6;j++){
			he+=dan[i][j]*j*j;
		}
		ans[i]=(he+35)/36;
		he=0;
	}
	for(int i=1;i<=hang;i++){
		cout<<ans[i]<<endl;
	}
	return 0;
}
