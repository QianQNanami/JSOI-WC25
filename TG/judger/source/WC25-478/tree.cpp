#include<bits/stdc++.h>
using namespace std;
int a[100005],fa[100005],n,sum[5],cnt;
int find(int x,int fq1,int fq2){
	if(x == fq1){
		return 1;
	}
	if(x == fq2){
		return 2;
	}
	if(x == 0){
		return 3;
	}
	return find(fa[x],fq1,fq2);
}
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i] >> fa[i];
	}
	for(int i = 1;i < n;i++){
		for(int j = i + 1;j <= n;j++){
			for(int k = 1;k <= n;k++){
				if(fa[i] != 0 && fa[j] != 0){
					if(find(k,i,j) == 1){
						sum[1] += a[k];
					}
					if(find(k,i,j) == 2){
						sum[2] += a[k];
					}
					if(find(k,i,j) == 3){
						sum[3] += a[k];
					}					
				}
			}
			if(fa[i] != 0 && fa[j] != 0)
			if(sum[1] == sum[2] && sum[2] == sum[3]){
				cnt++;
			}
			sum[1] = 0;
			sum[2] = 0;
			sum[3] = 0;
		}
	}
	cout << cnt;
	return 0;
}
