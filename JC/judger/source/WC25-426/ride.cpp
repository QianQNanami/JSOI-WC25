#include<bits/stdc++.h>
using namespace std;
string a,b;
int main(){
getline(cin,a);
getline(cin,b);
int f1=a.size(),f2=b.size(),s1=0,s2=0;
for(int i=0;i<f1;i++) {
	s1*=a[i];
}
for(int i=0;i<f2;i++){
	s2*=a[i];
}
if(s1%47==s2%47){
	cout<<"GO";
}else{
	cout<<"STAY";
}
return 0;
}

