#include <bits/stdc++.h>
using namespace std;
int a[405][405]={};
int n;
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	int ans=-114514; 
	cin>>n;
	for(int i=1;i<=n;++i)
		for(int j=1;j<=n;++j)
			cin>>a[i][j];
	for(int i=2;i<=n;++i){
		for(int j=2;j<=n;++j){
			ans=max(ans,(a[i][j]+a[i-1][j-1])-(a[i-1][j]+a[i][j-1]));
		}
	} 
	cout<<ans;
	return 0;
}
////3
////3 1 4
////5 1 3
////1 9 8
////3 1  4
////6 4  4
//// 14 14 
////0 0 0
////0 -2 -1
////0 12  max(-3,6);
//-2 6
////3
////-3  4  5
//// 7  9 -2
//// 1  0 -6
//
//// 0  0  0
//// 0 -5 -12
//// 0 -3 max(5,-15)
//-5 -15
////3
////3 1 3 
////4 3 2
////3 2 4
////
////  1
////    max(5,1)
//1 1
