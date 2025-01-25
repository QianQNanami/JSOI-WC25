#include <bits/stdc++.h>
using namespace std;
	
int main()
{
	int n;
	cin >> n;
	string a; 
	cin >> a;
	list<char>lst;
	for(int i=1;i<=n;i++)
		lst.push_back(a[i]);
	int q;
	cin >> q;
	for(int i=1;i<=q;i++)
	{
		int ti,fi,ci;
		cin >> ti;
		if(ti==1)
			{
				cin >> fi >> ci;
				int new =ci;
				for(int j=lst.begin();j<=lst.end();j++)
					if(*pop==fi)
						pop->fi->ci;
			}
		if(ti==2)
		{
			cin >> fi;
			lst.pop(fi);
		}
		
	}
	for(int i=lst.begin();i<=lst.end();i++)
		cout << lst.front() << endl;
	return 0;
}

