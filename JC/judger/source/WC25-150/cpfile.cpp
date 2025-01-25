#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,q=0;
	cin>>n;
	m=n-1;
	for(int i=1;i<n;i++){
		q+=i*m;
		m--;
		
	}
cout<<q;
	return 0;
}
