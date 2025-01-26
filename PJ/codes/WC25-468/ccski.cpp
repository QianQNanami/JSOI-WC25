#include<bits/stdc++.h>
using namespace std;
long long a[510][510];
bool b[510][510];
int n,m;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<=m;i++){
		a[0][i]=-1;
	}
	for(int i=1;i<=n+1;i++){
		a[i][0]=-1;
	}
	for(int i=0;i<=n;i++){
		a[i][m+1]=-1;
	}
	for(int i=1;i<=m+1;i++){
		a[n+1][i]=-1;
	}
	long long m1=INT_MAX,m2=INT_MAX;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>b[i][j];
			if(b[i][j]){
				m1=min(m1,a[i][j]);
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(m1==a[i][j]&&b[i][j]){
				long long t1=abs(a[i-1][j]-m1);
				long long t2=abs(a[i+1][j]-m1);
				long long t3=abs(a[i][j-1]-m1);
				long long t4=abs(a[i][j+1]-m1);
				if(a[i-1][j]==-1){
					t1=INT_MAX;
				}
				if(a[i+1][j]==-1){
					t2=INT_MAX;
				}
				if(a[i][j-1]==-1){
					t3=INT_MAX;
				}
				if(a[i][j+1]==-1){
					t4=INT_MAX;
				}
				m2=min(t1,min(t2,min(t3,t4)));
				break;
			}			
		}
	}
	cout<<m2<<endl;
	return 0;
}
/*3 5 
28 21 18 99 5
19 22 20 16 26
18 17 40 60 80
1 0 0 0 1
0 0 0 0 0
0 0 0 0 1
*/
