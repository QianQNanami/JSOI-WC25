#include<bits/stdc++.h>
using namespace std;
const int N=5e4+5;
int a[N],n,s1,s2,ans=0;
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++){
		if(a[i]*2>a[n]){
			s1=i-1;//会被包的  
			break;
		}
	}
	for(int i=n;i>=1;i--){
		if(a[i]<a[1]*2){
			s2=i+1;//包别人的 
			break;
		} 
	}

	if(s1<s2){
	    for(int i=n;i>=s2;i--){
	   	    while(!(2*a[s1]<a[i])){
	   	    	s1--;
			}
			ans++;
			s1--;
			if(s1==0){
				break;
			}
	    } 
	   cout<<ans;
	} 
	else{
		
	}
}
