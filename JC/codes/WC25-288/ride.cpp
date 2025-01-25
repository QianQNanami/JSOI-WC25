#include<bits/stdc++.h>
using namespace std;
int main(){
	string m,n;
	int o=1,q=1;
	char a[n],b[m];
	int c[26]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26}={A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z};
	cin>>m>>n;
	for(int i=1;i<=n;i++){//第i个 
	    for(int j=1;j<=26;j++){//字符j表示的数字 
	    	a[i]=c[j];
	    	o=o*a[i];
		}
	}
	for(int p=1;p<=m;p++){//第p个 
	    for(int l=1;l<=26;l++){//字符l表示的数字 
	    	b[p]=c[l];
	    	q=q*b[p];
		}
	}
	if(o%47==q%47){
		cout<<"GO";
	}else{
		cout<<"STAY";
	}
	return 0;
}
