#include<bits/stdc++.h>
using namespace std;
int n,a[105],s[105],sum;
int main(){
cin>>n;
for(int i=1;i<=n;i++){
	cin>>a[i];
}
sort(a+1,a+n+1);
for(int i=1;i<=n;i++)
{
	s[i]=s[i-1]+a[i-1];
	
	sum+=s[i];
}
cout<<sum;

	return 0;
} 
