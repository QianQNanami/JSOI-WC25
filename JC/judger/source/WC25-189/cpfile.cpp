#include<bits/stdc++.h>
using namespace std;
int a[1010];
int main(){
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	    while(a[i]<a[i+1]){
		    i++;
	    	swap(a[i],a[i+1]);
			
		}
	int time=0;
	for(int i=n;i>1;i--){
		n--;
		time+=a[i]*n;
		
	}
	cout<<time;
	return 0;
}
