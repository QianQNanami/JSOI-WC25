#include <bits/stdc++.h> 
using namespace std;
int a,s,d,f,g,h;
int main(){
	for(int i=1;i<=3;i++){
		cin>>a>>s>>d>>f>>g>>h;
		if((h>0)||((a,s,d,f,g)=0)){
			cout<<h<<endl;
		}
		else if((h>0)||((a>0)&&(s>0)&&(d>0)&&(f>0))){
			cout<<h+1<<endl;
		}
	}
	return 0;
	
}
