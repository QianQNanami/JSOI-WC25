#include<bits/stdc++.h>
using namespace std;
int n,k,g=1;
void f(int m){
	if((((m+k)%2)==0)&&(((m-k)%2)==0)&&((m-2)>=k)){
		g++;
		f((m-k)/2);
		f((m+k)/2);
	}
}
int main(){
	cin>>n>>k;
	f(n);
	cout<<g;
	return 0;
}
