#include<bits/stdc++.h>
using namespace std;
int ans=0;
void fen(int n,int k){
	int n1,n2;
	if(n>k+1||(n+k)%2==0){
		n1=(n+k)/2;n2=n-n1;
		fen(n1,k);fen(n2,k);}
	else{
		ans++;
	}
}

int main(){
	int n,k;
	cin>>n>>k;
	fen(n,k);
	cout<<ans<<endl;
	return 0;
}
