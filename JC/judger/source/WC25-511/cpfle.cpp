#include <bits/stdc++.h>
using namespace std;
int a[110];
int main(){
	int n,t=0,i,j;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i]; 
	} 
	sort(a+1,a+n+1);
	for(i=2;i<=n;i++){
		for(j=1;j<i;j++){
			t=t+a[j];
		}
		
	}
	cout<<t;
	return 0;
}
