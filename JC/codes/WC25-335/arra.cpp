#include<bits/stdc++.h>
using namespace std;
int ab(int n,int k){
	if(n<=k)
		return 1;
	if((n-k)%2==1||(n+k)%2==1)
		return 1;
	else
		return ab((n-k)/2,k)+ab((n+k)/2,k);
} 
int main(){
	int n,k;
	cin>>n>>k;
	cout<<ab(n,k)<<endl;
	return 0;
}
