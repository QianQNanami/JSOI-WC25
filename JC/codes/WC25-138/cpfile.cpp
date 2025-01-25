#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,ans=0;
	cin>>n;
	char a[n+2];
	cin>>a[n+2];
    for(int j=1;j<=n;j++){
	    for(int i=1;i<=n;i++){
	    if(a[i]>a[i+1]){
	    	swap(a[i],a[i+1]);
		}
	}
}
    for(int i=1;i<=n;i++){
    	ans=ans+i*n;
    	n--;
	}
	return 0;
}
