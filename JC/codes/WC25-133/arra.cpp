#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,n1,n2;
	cin>>n>>k;
	int i=1;
	while((n-k)%2==0){
		n2=(n2-k)%2;
		n1=(n1-k)%2;
		i++;
		
	}

	n1=i*n1;
	n2=i*n2;



	cout<<n1<<n2;
	return 0;
}

