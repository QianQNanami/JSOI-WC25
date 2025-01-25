#include<bits/stdc++.h>
using namespace std;
int m,n,x,k;
int main(){				
	cin>>m>>n;
	if(m>=1&&n>=m&&n<=10*10*10*10*10*10){
		for(int i=m+1;i<=n;i++){
			for(int j=2;j<=i-1;j++){
				if (i%j==0){
					k++	;											
				}	
			}
			if(k==0)
				x++;
			k=0;
		}
		cout<<x;
	}
	return 0;
	
}
