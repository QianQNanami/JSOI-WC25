#include<bits/stdc++.h>
using namespace std;
int n,k,s,b,d,t,q,sum;
int main(){
	cin>>n>>k;
	s=n-k;
	if(s/2>=1&&s%2==0){
		sum+=0;
		b=s/2;
		d=n-s;
		if(d/2>=1&&d%2==0)
		    sum+=1;
		t=d/2;
		q=d-t;
		if(t/2<1&&q/2<1)
		    sum+=2;
	}
	if(s/2>=1&&s%2!=0)
	    sum+=1;
	if(d/2>=1&&d%2!=0)
	    sum+=2;
	cout<<sum<<endl;
	return 0;
}
