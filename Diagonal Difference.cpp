#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);

	int n;
	cin>>n;
	int a[n][n];
	int d1=0,d2=0;
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0; i<n; i++)
	{
		  d1+=a[i][i];
		  d2+=a[i][n-1-i];
			
	}
	int result=abs(d1-d2);
	cout<<result;
}
