#include<bits/stdc++.h>
using namespace std;
int a[70005][10],cnt;
int putin(int n){
	bool f[10][10];
	int lft=36;
	memset(f,0,sizeof(f));
	int res=a[n][6];
	bool need=0;
	for (int i=5;i>=1;i--){
		for (int x=1;x<=6&&a[n][i]>0;x++){
			need=1;
			if (lft<i*i) break;
			for (int y=1;y<=6&&a[n][i]>0;y++){
				bool flag=1;
				for (int u=x;u<=x+i-1;u++)	
					for (int v=y;v<=y+i-1;v++)
						if (f[u][v]||u>6||v>6) flag=0;
				if (!f[x][y]&&flag){
					lft-=i*i;
					for (int u=x;u<=x+i-1;u++)
						for (int v=y;v<=y+i-1;v++) f[u][v]=1;
					a[n][i]-=1;
				}if (lft<i*i) break;
			}
		}
	}
	if (need) res++;
	for (int i=1;i<=5;i++)
		if (a[n][i]>0) {
			a[n][6]=0;
			res+=putin(n);
		}
	return res;
}
int main(){
	while (1){
		cnt++;
		int sum=0;
		for (int i=1;i<=6;i++) {
			cin>>a[cnt][i];
			if (a[cnt][i]==0) sum++;
		}
		if (sum==6) {
			cnt--;
			break;
		}
	}
	for (int i=1;i<=cnt;i++){
		cout<<putin(i)<<endl;
	}
	
	return 0;
}
