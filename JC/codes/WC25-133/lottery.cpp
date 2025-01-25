#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c=0;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		for(int h=2;h*h<=b;i++){
			if(i==2){
				c++;
			}
			if(i%h==0){
				c++;
			}
		}
		
	}
	cout<<c;






	return 0;
}

