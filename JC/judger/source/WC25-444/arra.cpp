#include<bits/stdc++.h>
using namespace std;
int main(){
	int c=0,N,K,z;
	cin>>N>>K;
	while(N-K>=0){
		N=N-K;
		c++;
	}
	cout<<c;
	return 0;
}
