#include<bits/stdc++.h>
using namespace std;
char star[70],team[70];
int main(){
	cin>>star>>team;
	int i=0,j=0,a=1,c=1;
	while(true){
		if(star[i]=='\0')break;
		int b;
		b=star[i]-64;
		a=a*b;
		i++;
	}
	while(true){
		if(team[j]=='\0')break;
		int d;
		d=team[j]-64;
		c=c*d;
		j++;
	}
	if(a%47==c%47)cout<<"GO";
	else cout<<"STAY";
	return 0;
}
