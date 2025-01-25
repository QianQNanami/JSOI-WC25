#include<bits/stdc++.h>
using namespace std;
//int is_su(int bu){
//	if(bu==2||bu==3||bu==5||bu==7||bu==11||bu==13||bu==17||bu==19||bu==23||bu==29||bu==31||bu==37||bu==41||bu==43||bu==47||bu==53||bu==59||bu==61||bu==67||bu==71||bu==73||bu==76||bu==79||bu==83||bu==89||bu==91||bu==97){
//		   return 1;	
//	}
//	else return 0;
//}
int a,b,bu,sum=0;
int main(){
	cin>>a>>b;
	bu=b-a+1;
	for(;bu;){
    
       if(bu==2||bu==3||bu==5||bu==7||bu==11||bu==13||bu==17||bu==19||bu==23||bu==29||bu==31||bu==37||bu==41||bu==43||bu==47||bu==53||bu==59||bu==61||bu==67||bu==71||bu==73||bu==79||bu==83||bu==89||bu==91||bu==97){
		   sum++;	
	}
		bu--;
	}

	cout<<sum;
	return 0;
}
