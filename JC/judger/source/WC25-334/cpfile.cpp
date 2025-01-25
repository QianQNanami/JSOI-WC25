#include<bits/stdc++.h>
using namespace std;
int a[105];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n-i;j++){
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
		}
	int t;
	for(int i=1;i<n;i++){
		for(int j=i;j>=0;j--)
			t+=a[j];
	}
	cout<<t;
	return 0;
}

