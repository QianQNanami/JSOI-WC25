#include <bits/stdc++.h>
using namespace std;
const int N=5e4+10;
int a[N];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	sort(a+1,a+1+n);
	int only_in,only_out;
	for(;only_in<=n&&a[only_in]<a[1]*2;only_in++)
	for(;only_out>=1&&a[only_out]<=a[n]*2;only_out--)
	printf("%d%d",only_in,only_out);
}
