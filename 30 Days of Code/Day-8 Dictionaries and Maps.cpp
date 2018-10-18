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
long a;
string s,q;
cin>>n;
cin.ignore();

map<string,long>m;

forn(i,n)
{
	cin>>s>>a;
	m[s]=a;
}
while(cin>>q)
{
  if(m[q])
  {
  	cout<<q<<"="<<m[q]<<endl;
  }
  else
  {
  	cout<<"Not found"<<endl;
  }
}
m.clear();

return 0;
}
