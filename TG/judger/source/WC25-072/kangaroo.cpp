#include<bits/stdc++.h>
using namespace std;
long long a[100000];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	} 
	sort(a+1,a+1+n);
	for(int i=n;i>=1;i--){
		if(a[i]!=-1){
		
			int tmp=a[i]/2;
			a[i]=-1;
			for(int j=n;j>=1;j--){
				if(a[j]<=tmp&&a[j]!=-1){
						ans++;
						a[j]=-1	;
						break;		
				}
			}
		}
	}
	cout<<ans;

	return 0; 
} 

 
