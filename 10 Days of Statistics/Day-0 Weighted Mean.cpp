#include<bits/stdc++.h>

#define forn(i,n) for(int i=0; i<(int)(n); i++)
#define for1(i,n) for(int i=1; i<=(int)(n); i++)
#define forr(i,n) for(int i=(int)(n)-1; i>=0; i--)

using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.precision(1);
cout<<fixed;

int n;
cin>>n;
int a[n],b[n];
double sum=0,sum1=0;

forn(i,n)
{
	cin>>a[i];
}
forn(i,n)
{
	cin>>b[i];
}
forn(i,n)
{
	sum+=b[i];
	sum1+=a[i]*b[i];
}
cout<<sum1/sum;
sum=0;
sum1=0;

return 0;
}
