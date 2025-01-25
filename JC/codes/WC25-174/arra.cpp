#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,h;
	cin>>n>>k;
	h=0;
	for(int i=1;i<=100;i++){
	if((n-k)%2==1||n<n-k+1||n<0)break;
	else h++;n=(n-2)/2;
	}
	cout<<h;
	return 0;
}
