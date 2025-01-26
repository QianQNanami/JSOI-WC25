#include<bits/stdc++.h>
using namespace std;
int a[10],b,s;
int main(){
	while(1){
		s=0;
		b=0;
		for(int i=1;i<=6;i++){
			cin>>a[i];
			b+=i*i*a[i];
		}
		if(b==0){
			break;
		}
		if(b<36){
			s=1;
			cout<<s<<endl;
			continue;
		}
		else{
			if(b%36==0){
				s=b/36;
			}
			else{
				s=b/36+1;
			}
			cout<<s;
			continue;
		}
	}
	return 0;
}

