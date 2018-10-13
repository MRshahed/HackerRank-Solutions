#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);

int n;
cin>>n;
int a[n];
int count=0;
for(int i=0; i<n; i++)
{
	cin>>a[i];
}
sort(a,a+n);
for(int i=0; i<n; i++)
{
	if(a[i]==a[n-1])
	{
		count++;
	}
}
cout<<count;
}

