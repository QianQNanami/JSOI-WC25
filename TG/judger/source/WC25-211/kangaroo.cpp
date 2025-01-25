#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=5e4+5;
int n,ans;
int a[N];
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	sort(a+1,a+n+1);
	int pos2=1;
	for(int i=n/2+1;i<=n;i++){
		if(a[i]>=a[pos2]*2){
			ans++;
			pos2++;
		}
	}
	printf("%d\n",ans);
	return 0;
}
