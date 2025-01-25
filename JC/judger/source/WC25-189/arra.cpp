#include<bits/stdc++.h>
using namespace std;
long long a[10000000000];
int main()
{
	int n,k;
	int i=1;
	cin>>n>>k;
	while((n+k)/2-(n-k)/2==k&&(a[i]+k)/2-(a[i]-k)/2==k){
		if((n+k)/2-(n-k)/2==k)
		{
			a[i]=(n-k)/2;i++;
			a[i]=(n+k)/2;
			while((a[i-1]+k)/2-(a[i-1]-k)/2==k){
				i++;
				a[i]=(a[i-2]-k)/2;i++;
				a[i]=(a[i-3]+k)/2;
				
			}
			while((a[i-3]+k)/2-(a[i-3]-k)/2==k){
				i++;
				a[i]=(a[i-3]-k)/2;i++;
				a[i]=(a[i-4]-k)/2;
			}
		}
		else {
			cout<<i;
			return 0;
		}
	}
}
