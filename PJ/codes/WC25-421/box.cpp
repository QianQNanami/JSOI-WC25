#include<bits/stdc++.h>
using namespace std;
int a[70005][7];
int k[70005];
int ans[70005];
int num[70005];
int i=1;
int m;
int main(){
	while(true){
		k[i]=36;
		for (int j = 1;j <= 6;j++){
			cin >> a[i][j];
			if (j==1) k[i]-= a[i][j]*1;
			if (j==2) k[i]-= a[i][j]*4;
			if (j==3) k[i]-= a[i][j]*9;
			if (j==4) k[i]-= a[i][j]*16;
			if (j==5) k[i]-= a[i][j]*25;
			if (j==6) k[i]-= a[i][j]*36;
			while(k[i]<=0) {
				ans[i]++;
				k[i]+=36;
			}
			if (a[i][j]==0) num[i]++;
		}
		if (num[i]==6){
			break;
		}
		i++;
	}
	i--;
	for (int l = 1;l <= i;l++){
		cout << ans[l] << endl;
	}
	return 0;
}
