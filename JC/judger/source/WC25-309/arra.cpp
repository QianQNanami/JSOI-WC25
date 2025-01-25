#include<bits/stdc++.h>
using  namespace std;
int n,k,j,a,b,t,p,sum=0;
int main() {
	cin>>n>>k;
	j=n-k;
	if(j/2>=1&&j%2==0) {
		sum+=0;
		a=j/2;
		b=n-j;
		if(b/2>=1&&b%2==0)
			sum+=0;
		if(a/2<1)
			sum+=1;
		t=b/2;
		p=b-t;
		if(t/2<1&&p/2<1)
			sum+=2;
	}
	if(j/2>=1&&j%2!=0)
		sum+=1;
	if(b/2>=1&&b%2!=0)
		sum+=2;

	cout<<sum<<endl;
	return 0;
}
