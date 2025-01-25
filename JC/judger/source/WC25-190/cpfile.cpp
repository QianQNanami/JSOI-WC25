#include<bits/stdc++.h>
using namespace std;
long long a[31];
int main()
{
	int n;cin>>n;
	if(n==1){cout<<0;}
	else if(n==2){
		if(a[1]>a[2])cout<<a[2];
		else cout<<a[1];
	}
	return 0;
}
