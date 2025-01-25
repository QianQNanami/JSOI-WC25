#include <bits/stdc++.h>
using namespace std;

bool iss(int n)
{
    if(n == 2)
	{
		return 1;
	}else
	{
	    for(int i = 2;i <= n / 2 + 1;i++)
		{
			if(n % i == 0)
			{
				return 0;
			}
		}	
	}	
	return 1;
}

int main()
{
    int begin, end, sum = 0;
    cin >> begin >> end;
    for(int i = begin + 1;i < end;i++)
    {
    	if(iss(i)) sum++;
	}
	cout << sum<<endl;
	return 0;
}

