#include <bits/stdc++.h>
using namespace std;
int a[7],s,ans;
int main(){
	while(1){
		s=0;
		for(int i=1;i<=6;i++){
			cin>>a[i];
			s+=a[i]*i*i*i;
		}
		if(s<=216&&s!=0)cout<<1<<endl;
		else if(s>216&&s%216==0)cout<<s/216<<endl;
		else if(s>216&&s%216!=0)cout<<s/216+1<<endl;
		else return 0;
	}
}
