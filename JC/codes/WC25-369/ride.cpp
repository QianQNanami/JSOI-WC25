#include<bits/stdc++.h>
using namespace std;



int main(){
	string hui,dui;
	cin>>hui>>dui;
	//hui="USACO";dui="HVNGAT";
	int h=1,d=1 ,i,n;
	for(i=0;i<hui.size();i++){
		n=int(hui[i])-int('A')+1;
		h=h*n;	
	}h=h%47;
	for(i=0;i<dui.size();i++){
		n=int(dui[i])-int('A')+1;
		d=d*n;	
	}d=d%47;
	if(h==d)cout<<"GO"<<endl;
	else cout<<"STAY"<<endl;
	return 0;
}
