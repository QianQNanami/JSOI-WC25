#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,sum=-1,b=0;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		b=0;
		if(m!=1){
		sum++;
		}
	for(int j=i-1;j>=2;j--){
	if(i%j==0){
	b++;
	break;
	}
	}
	if(b<1){
	sum++;
	}
	}
	cout<<sum;
return 0;
}
