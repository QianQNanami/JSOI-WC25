#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,a=0;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		if(i%2==1&&i%3!=0){
			a++;
		}
	}
		if(m==1){
			a++;
		}
	cout<<a;
	return 0;
}
