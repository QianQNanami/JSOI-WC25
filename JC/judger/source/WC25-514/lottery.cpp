#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int main(){
	int m,n,i,j,s=0;
	cin>>m>>n;
	for(i=m;i<=n;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				a[i]++;
				break;
			}
		}
	}
	for(i=m;i<=n;i++){
		if(a[i]==0 && i!=1){
			s++;
		}
	}
	cout<<s<<endl;
	
	return 0;
}
