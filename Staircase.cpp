#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);

	int n;
	cin>>n;
	for(int i=1; i<=n; i++)
    {
		for(int j=n-1; j>=i; j--)
		{
			cout<<" ";
		}
		for(int k=1; k<=i; k++)
		{
			cout<<"#";
		}
		cout<<endl;
	}
}

