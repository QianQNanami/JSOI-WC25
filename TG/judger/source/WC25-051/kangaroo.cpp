#include<bits/stdc++.h>
using namespace std;
int n;
int a[100010],f[100010],ans=0;
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+1+n);
	int j=1,k=2;
	while(k<=n&&j<k){
		if(f[j])j++;
		if(a[j]*2<=a[k]){
			cout<< a[j]<<" "<<a[k]<<endl;;
			ans++;f[k]=1;j++;
		}
		k++;
	}
	cout<<ans;
	return 0;
}
// 3
// 2 -34 5
// 3 79 -2
// 4 10 -6

