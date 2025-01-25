#include <bits/stdc++.h>
using namespace std;
const int N=5e4+5;
int a[N];
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int mid=n/2;
	int cnt=0;
	for(int i=0,j=mid;i<mid&&j<n;j++){
		if(a[j]>=2*a[i]){
			i++;
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}

