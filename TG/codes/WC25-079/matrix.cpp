#include<bits/stdc++.h>
using namespace std;
const int N = 505;
int a[N][N],ans=0;
void add(int x,int y,int k){
	int sum1=0,sum2=0;
	
	for(int i = 0;i<k;i++){
		
		//cout<<x+i<<" "<<y+i<<" "<<k-i<<"\n";
		
		sum1+=a[x+i][y+i];
		sum2+=a[x+i][y+k-i-1];
	} 
	
	//cout<<sum1<<" "<<sum2<<"\n\n";
	
	ans = max(ans, sum1 - sum2);
}
int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int k = 2;k<=n;k++){
		for(int i = 1;i<=n-k+1;i++){
			for(int j = 1;j<=n-k+1;j++){
				
				add(i,j,k);
				
			}
		}
	}
	
	cout<<ans;
	
	return 0;
} 
