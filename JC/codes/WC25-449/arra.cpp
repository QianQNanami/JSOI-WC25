#include<iostream>
using namespace std;
int main()
{   int a,b,c,d,s=0,z=0;
    cin>>a>>b;
    c=(a-b)/2;
    d=a-c;
    for(int i=1;i<=a;i++)
	{
    if(c>b+1) 
	{ 
	c=(a-b)/2;
	s++;
	}
    if(d>b+1)
	{
     d=(a-b)/2;	
     s++;
	}
	z=s;
}
	if(c<=b+1&&d<=b+1){
	z=z+3;	
	cout<<z;
	}
	return 0;
}
