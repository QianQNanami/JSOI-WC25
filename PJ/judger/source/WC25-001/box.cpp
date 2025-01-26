#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d,e,f;
	while(true){
		cin >> a >> b >> c >> d >> e >> f;
		if(a == 0 && a == 0 && a == 0 && d == 0 && e == 0 && f == 0) break;
		if((1*a+2*2*b+3*3*c+4*4*d+5*5*e+6*6*f)%36 == 0){
			cout << (1*a+2*2*b+3*3*c+4*4*d+5*5*e+6*6*f)/36 << endl;
		}else{
			cout << (1*a+2*2*b+3*3*c+4*4*d+5*5*e+6*6*f)/36+1 << endl;
		}
	}
	return 0;
}
