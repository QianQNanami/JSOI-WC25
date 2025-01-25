#include<bits/stdc++.h>
using namespace std;
bool qs(int a){
	if(a==1){
		return false;
	}
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return true;
		}
	}
}
int main(){
    int  m,n,sum=0;
    cin>>m>>n;
    for(int i=m;i<=n;i++){
    	if(qs(i)==false){
    		sum++;
		}
	}
	cout<<sum-1<<endl;
return 0;
} 
