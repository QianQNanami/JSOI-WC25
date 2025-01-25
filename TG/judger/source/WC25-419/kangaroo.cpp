#include<bits/stdc++.h>
using namespace std;
long long a[100050];
long long q[100050];
long long head=1,tail=0;
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	long long n;
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int tot=n,cnt=0;
	while(tot){
		tail++;
		q[tail]=a[tot];
		tot--;
		if(q[head]/2.0>=q[tail]){
			head++;
			tail--;
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
