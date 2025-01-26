#include <bits/stdc++.h>
using namespace std;
int main(){
	long lon#include <bits/stdc++.h>
using namespace std;g a[10];
	while(true){
		int c=0,n=0,sum=0;
		for(int i=1;i<=6;i++){
			cin>>a[i];
			if(a[i]==0){
				c++;
			}
			sum+=i*i*a[i];
		}
		if(c==6){
			break;
		}
		while(1){
			if(sum>=36){
			    n++;
			    sum-=36;
			}else{
				if(sum>=1){
					n++;
				}
				break;
			}
		}
		cout<<n<<endl;
	}
	return 0;
}
