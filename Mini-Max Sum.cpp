#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);

long int a[5];
long int sum1=0,sum2=0;

	for(int i=0; i<5; i++)
    {
    	cin>>a[i];
	}
	sort(a,a+5);
	for(int i=0; i<4; i++)
	{
		sum1+=a[i];
	}
	for(int i=1; i<5; i++)
	{
		sum2+=a[i];
	}
	cout<<sum1<<" "<<sum2;

}

