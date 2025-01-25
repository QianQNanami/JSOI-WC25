#include<bits/stdc++.h>
using namespace std;
int main(){
int e=0,f=0;

int c[a],d[b];
if(a>66&&b>66){
	cout<<"STAY"<<endl;	
}
for(int i=1;i<=a;i++){
	cin>>c[i];
	
}for(int j=1;j<a;j++){
		e=c[j]*c[j+1];
	}
for(int i=1;i<=b;i++){
	cin>>d[i];
	
}for(int j=1;j<a;j++){
		f=d[j]*d[j+1];
	}
if(e==f){
	cout<<"GO"<<endl;
}else{
    cout<<"STAY"<<endl;	
}
return 0;
} 
