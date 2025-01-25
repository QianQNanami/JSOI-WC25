#include<bits/stdc++.h> 
using namespace std;
int a,b[50005],ans=0,sum=0;
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","o",stdin);
	cin>>a;
	for(int i=1;i<=a;i++){
		cin>>b[i];
	}
	sort(b+1,b+1+a);
	for(int i=a/2;i<=a;i++){
		int e=1,f=a,g=0;
		for(int j=a;j>=i;j--){
			if(b[f]>=b[e]*2){
				ans++;
				f--;
			}
			e--;
			if(e==0){
				break;
			}
		}
		sum=max(sum,ans);
	}
	cout<<a-ans;
	return 0;
}
