#include<bits/stdc++.h> 
using namespace std;
int main(){
	int cnt=0;
	while(1)
	{
	    int a,b,c,d,e,f;
		int cnt=0;
		int op=0;
		cin>>a>>b>>c>>d>>e>>f;
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
		{
			break;
	    }
	    cnt+=f;
	    a=a-e*11;
	    cnt+=a;
	    if(d!=0)
		{
		 a=a-(36-16+b%5*4); 
		 b=b-d*5;
		 cnt+=d;
		}
	   cnt+=c/4;
	   int sum=c%4;
	   if(sum==1)
	   {
	   	   if(b<5)
	   	   {
	   	   	a-=27-b*4;
				  b=0;
			}
			else
			{
				a-=5;
				b-=9;
			}
	   }
	   if(sum==2)
	   {
	   	if(b<3)
	   	{
	   		a-=27-b*4;
	   		b=0;
		}
		else
		{
			a-=3;
			b-=6;
		}
	   }
	   if(sum==3)
	   {
	   	   if(b==0)
	   	   {
	   	   	a-=9;
			}
			else
			{
				b-=1;
			    a-=5;
			}
	   }
	   cnt+=b/9;
	   a-=(36-b%9);
	   cnt+=a%36;
	   cout<<cnt<<"\n";
	}
	//1*1 36
	//2*2 9 ==1*1---4
	//3*3 4==1*1 ---9
	//4*4 2==1*1 ---16
	//5*5 1==1*1---25
	//6*6 1 ==1*1---36
	return 0;
}
