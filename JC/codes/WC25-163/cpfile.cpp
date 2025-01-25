#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a[110],s;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	s=a[0];
	sort(a+1,a+n+1);
	for(int i=1;i<n;i++){
		s+=a[i];
		a[i]=s;
	}
	s=0;
	for(int i=1;i<n;i++){
		s+=a[i];
	}
	cout<<s;
	
	return 0;
}
