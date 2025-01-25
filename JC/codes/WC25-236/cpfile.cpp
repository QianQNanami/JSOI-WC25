#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,sum=0;
	cin >> n;
	int a[1001];
	for(int i=0;i<n;i++){
		cin >> a[i];
	} 
	sort(a,a+n);
	int m=n-1;
	for(int i=0;i<n-1;i++){
		sum+=a[i]*m;
		m--;
	}
	cout << sum;
	
	return 0;
}
