5#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,s=0;
	cin>>n;
	int a[1111];
	for(int i=0;i<n; i++){
		cin>>a[i];
	} 
	sort(a,a+n);
	int b=n-1;
	for(int i=0;i<n-1;i++){
		s+=a[i]*b;
		b--;
	} 
	cout <<s<<endl;
	return 0;
}
