#include<bits/stdc++.h>
using namespace std;
long long a(long n,long long k){
	int x,f=0,t=0;
	for(int i=1;i<=n/2;i++){
		if(abs((n-i)-i)==k&&(n-i)!=0&&i!=0){
			f=1;
			t=i;
			break;	
		}
	}
	if(f==0) return 1;
	else     return a(t,k)+a(abs(n-t),k);
}
int main(){
	long long n,k;
	cin>>n>>k;
	cout<<a(n,k);
	return 0;
}
