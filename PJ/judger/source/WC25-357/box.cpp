#include <bits/stdc++.h>
using namespace std;

//bl
int one,two,three,four,five,six;
int dthree,done,dtwo,dzong;
int ans;

int main()
{
	//freopen("box.in","r",stdin);
	//freopen("box.out","w",stdout);
	while(1)
	{
		ans = 0;
		scanf("%d %d %d %d %d %d",&one,&two,&three,&four,&five,&six);
		if (!one && !two && !three && !four && !five && !six) 
		{
			break;
		}
		ans += (six + five + four);
		//减去“附赠”品 
		one -= five * 11;
		if (one < 0)
		{
			one = 0;
		}
		two -= four * 5;
		if (two < 0)
		{
			two = 0;
		}
		//计算剩下的1,2,3型号 
		done = one % 36;
		dtwo = two % 9;
		dthree = three % 4;
		dzong = done * 1 + dtwo * 2 + dthree * 3;
		//cout<<"dz:"<<dz<<endl;
		if (dzong > 36) 
		{
			ans += 2;
		}
		else if (dzong > 0)
		{
			ans += 1;
		}
		one /= 36;
		two /= 9;
		three /= 4;
		
		ans += (one + two + three);
		cout <<ans<<endl;
	}
	return 0;
}
