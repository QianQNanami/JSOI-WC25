#include <bits/stdc++.h>
using namespace std;
int a[1005];
int main(){
	int n,s=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int t;
		cin>>a[i];
		if(a[i]<a[i+1]){
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		} 
		s=s+a[i];
	}
	cout<<s-5<<endl;
    return 0;
}
