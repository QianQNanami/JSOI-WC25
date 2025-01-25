#include <bits/stdc++.h>
using namespace std;
int a[67], b[67];
int main()
{
	char zcz, hx;
	int hxcd = 1, zczj = 1;
	int zczj = 1, hxj = 1;
	for (int i = 0; i <= zcz.size() - 1; i++)
	{
		cin >> zcz;
		if (zcz == "A") zcz = 1;
		if (zcz == "B") zcz = 2;
		if (zcz == "C") zcz = 3;
		if (zcz == "D") zcz = 4;
		if (zcz == "E") zcz = 5;
		if (zcz == "F") zcz = 6;
		if (zcz == "G") zcz = 7;
		if (zcz == "H") zcz = 8;
		if (zcz == "I") zcz = 9;
		if (zcz == "J") zcz = 10;
		if (zcz == "K") zcz = 11;
		if (zcz == "L") zcz = 12;
		if (zcz == "M") zcz = 13;
		if (zcz == "N") zcz = 14;
		if (zcz == "O") zcz = 15;
		if (zcz == "P") zcz = 16;
		if (zcz == "Q") zcz = 17;
		if (zcz == "R") zcz = 18;
		if (zcz == "S") zcz = 19;
		if (zcz == "T") zcz = 20;
		if (zcz == "U") zcz = 21;
		if (zcz == "V") zcz = 22;
		if (zcz == "W") zcz = 23;
		if (zcz == "X") zcz = 24;
		if (zcz == "Y") zcz = 25;
		if (zcz == "Z") zcz = 26;
		a[i] = zcz;
	}
	for (int i = 0; i <= zcz.size() - 1; i++)
	{
		zczj *= a[i];
	}
	for (int i = 0; i <= hx.size() - 1; i++)
	{
		cin >> hx;
		if (hx == "A") hx = 1;
		if (hx == "B") hx = 2;
		if (hx == "C") hx = 3;
		if (hx == "D") hx = 4;
		if (hx == "E") hx = 5;
		if (hx == "F") hx = 6;
		if (hx == "G") hx = 7;
		if (hx == "H") hx = 8;
		if (hx == "I") hx = 9;
		if (hx == "J") hx = 10;
		if (hx == "K") hx = 11;
		if (hx == "L") hx = 12;
		if (hx == "M") hx = 13;
		if (hx == "N") hx = 14;
		if (hx == "O") hx = 15;
		if (hx == "P") hx = 16;
		if (hx == "Q") hx = 17;
		if (hx == "R") hx = 18;
		if (hx == "S") hx = 19;
		if (hx == "T") hx = 20;
		if (hx == "U") hx = 21;
		if (hx == "V") hx = 22;
		if (hx == "W") hx = 23;
		if (hx == "X") hx = 24;
		if (hx == "Y") hx = 25;
		if (hx == "Z") hx = 26;
		b[i] = hxl;
	}
	for (int i= 0; i <= hx.size() - 1; i++)
	{
		hxcd *= b[i];
	}
	if (hxcd == zczj) cout << "STAY";
	else cout << "GO";
	return 0;
}

