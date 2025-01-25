#include<bits/stdc++.h>
using namespace std;
char a[1010];
int main(){
	int n,i,x,h=0,max=0,s=1;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>x;
		a[x]++;
		if(x>max){
			max=x;
		}
	}
	for(i=1;i<=max;i++){
		if(a[i]!=0){
		    h=(n-s)*i+h;
		}
		s++;
	}
	cout<<h;
	
	return 0;
}
