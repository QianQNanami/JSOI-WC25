#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,i,y; 
	cin>>n>>k;
	y=n-k;
	while(y%2==0){
		y%2!=0;
		i++;
	}
	cout<<i;
	return 0;
}
