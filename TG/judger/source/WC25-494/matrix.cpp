#include <bits/stdc++.h>
using namespace std;
int sum1[405][405], sum2[405][405], N, ans=INT_MIN; 
int main(){
	scanf("%d", &N); int c;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			scanf("%d", &c);
			if(i>1&&j>1){
				sum1[i][j]=sum1[i-1][j-1]+c;
			}else{
				sum1[i][j]=c;
			}
			if(i>1&&j<N){
				sum2[i][j]=sum2[i-1][j+1]+c;
			}else{
				sum2[i][j]=c;
			}
		}
	}
	for(int i=2; i<=N; i++){
		for(int j=2; j<=N; j++){
			for(int k=2; k<=min(i, j); k++){
				ans=max(sum1[i][j]-sum1[i-k][j-k]-sum2[i][j-k+1]+sum2[i-k][j+1], ans);
			}
		}
	}
	printf("%d", ans);
	return 0;
}

