#include <bits/stdc++.h>
using namespace std;
long long a[100001];
long long q[1000001];
int head=1,tail=0;
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int tot=n,cnt=0;
	while(tot){
		tail++;
		q[tail]=a[tot];
		tot--;
		if(q[head]/2>=q[tail]){
			head++;
			tail--;
			cnt++;
		}
	}
	cout<<cnt;
}
