#include<iostream>
using namespace std;
int n,k,c;
int x,y;
int main(){
	cin>>n>>k;
	while(n){
		x=(n-k)/2+k;
		y=(n-k)/2;
		if(y<=k)c++;
		if(x<=k)c++;
		
	}cout<<c;
	return 0;
}
