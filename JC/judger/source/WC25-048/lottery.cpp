#include<bits/stdc++.h>
using namespace std;
bool s(int a){
	int b=0;
	for(int i=1;i<=a;i++){
		if(a%i==0)b++;
	}
	if(b>2)return false;
	else return true;
}
int main(){
	int m,n,a=0;
	cin>>m>>n;
	if(m==n&&s(m)==true)cout<<1;return 0;
	for(int i=m;i<=n;i++){
		if(i%2==0){
			if(i==2)a++;
		}
		else if(i==2)a++;
		else if(i==1);
		else{
			int b;
			for(int j=1;j<=i;j++){
				if(i%j==0)b++;
				if(b>2)a++;break;
			}
		}
	}
	cout<<a;
	return 0;
} 
