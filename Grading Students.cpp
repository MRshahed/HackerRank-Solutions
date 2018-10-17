#include<bits/stdc++.h>

#define forn(i,n) for(int i=0; i<(int)(n); i++)
#define for1(i,n) for(int i=1; i<=(int)(n); i++)
#define forr(i,n) for(int i=(int)(n)-1; i>=0; i--)

using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.precision(10);
cout<<fixed;

int n;
cin>>n;
int a[n];
forn(i,n)
{
	cin>>a[i];
	
 if(a[i]<38 || a[i]%5==0)
	{
		cout<<a[i]<<endl;
	}
	else if((a[i]+1)%5==0)
	{
		cout<<a[i]+1<<endl;
	}
	else if((a[i]+2)%5==0)
	{
		cout<<a[i]+2<<endl;
	}
	else
	{
		cout<<a[i]<<endl;
	}
}


return 0;
}
