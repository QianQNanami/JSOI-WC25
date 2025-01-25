#include<bits/stdc++.h>
using namespace std;
int m,n,box=0;
bool t=true;
int main(){
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		if(m==1){
			i=2;
			m=0;
		}
		for(int j=2;j<i;j++){
			if(i%j==0){
				t=false;
			}
		}
		if(t==true){
			box++;
		}
		t=true;
	}
	cout<<box;
	return 0;
}
