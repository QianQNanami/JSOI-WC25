#include<bits/stdc++.h>
using namespace std;
int D(int x,int y){
	int x1,x2;
	if(x>=y+2){
	x1=x+2/2;
	x2=x-2/2;}
	else return 1;
	if(x1<y+2) return 1+D(x2,y);
	if(x1<y+2&&x2<y+2) return 2;
	if(x2<y+2) return 1+D(x1,y);
	else return D(x1,y)+D(x2,y);
}
int main(){
	int m,n;
	cin>>m>>n;
	cout<<D(m,n);
	return 0;
}
