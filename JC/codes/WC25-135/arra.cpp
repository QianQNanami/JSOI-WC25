#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,K,i;
	cin>>N>>K;
	for(i=1;i<=N;i++){
		if((N-K)%2==0){
			i+1;
		}
	}
	cout<<i<<endl;
	return 0;
}
