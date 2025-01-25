#include<bits/stdc++.h>
using namespace std;
int o;
int main ()
{
int n;
int k;
cin>>n>>k;
for(int i=1;i<n;i++){
	if((n-k)/2==0){
		o+=2;
		n=n-(n-k)/2;
	}
}
cout<<o+1;
return 0;	
}
