#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string a;
	for(int i=0; i<n; i++)
	{
		cin>>a;
		
		for(int i=0; i<a.length(); i++)
	{
		if(i%2==0)
		{
			cout<<a[i];
		}

	}
	cout<<" ";
		for(int i=0; i<a.length(); i++)
	{
		if(i%2!=0)
		{
			cout<<a[i];
		}

	}
	cout<<endl;
	
	}
	
}
