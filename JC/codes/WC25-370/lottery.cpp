#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[100000],n,m,x=0,s=0;
	cin>>n>>m;
	for(int i=n;i<=m;i++){
		for(int j=1;j<=i-1;j++){
			if(j>1){
				if(i%j!=0){
					x++;
				}
			}
		}
		if(x==i-2){
			s++;
		}
		x=0;	
		
	}
	cout<<s;
	return 0;
}
