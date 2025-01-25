#include<iostream>
using namespace std;
int N,K;
long long abcdffg(int n,int k){
	if(n<3)
		return 1;
	return abcdffg((n-k)/2)+abcdffg((n+k)/2);
}
int main(){
	cin>>N>>K;
	cout<<abcdffg(N,K);
}
