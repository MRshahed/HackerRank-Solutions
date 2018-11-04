#include<bits/stdc++.h>

#define forn(i,n) for(int i=0; i<(int)(n); i++)
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
}
   forr(i,n)
   {
   	cout<<a[i]<<" ";
   }

return 0;
}
