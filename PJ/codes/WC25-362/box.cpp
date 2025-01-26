#include<bits/stdc++.h>
using namespace std;
int a,num[100000],p;
int main(){
	for(int i=1;;i++){
		for(int j=1;j<=6;j++){
			cin>>a;
			num[i]+=a*j*j;
		}
		if(num[i]==0){
			p=i;
			break;
		}
	}
	for(int k=1;k<p;k++){
		if(num[k]%36==0)
		    cout<<num[k]/36<<endl;
		else
		    cout<<num[k]/36+1<<endl;
	}
	return 0;
}
