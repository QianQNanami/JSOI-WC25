#include<bits/stdc++.h>
using namespace std;
long long m,n,a,sum;
int main(){
    cin>>m;
    cin>>n;
    a=n-m+1;
    for(int i=1;i<=a;i++){
    	int f=0;
	    for(int j=1;j<=i;j++){
			if(i%j==0) f++; 
		}
		if(f==2) sum++;
    }
    cout<<sum;
	return 0;
}
