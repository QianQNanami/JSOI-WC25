#include<bits/stdc++.h>
using namespace std;
int n,a[50005],cnt;
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		for(int j=n;j>=1;j--){
			if(i<=j/2&&a[i]!=0&&a[j]!=0){
				a[i]=a[j]=0;
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;
	return 0;
}
