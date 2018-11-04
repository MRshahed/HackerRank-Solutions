#include<bits/stdc++.h>
using namespace std;
main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
	
int a;
double b;
string c;
cin>>a;
cin>>b;
cin.ignore();
getline(cin,c);

a+=b;
b+=b;

cout.precision(1);
cout<<fixed;
cout<<a<<endl;
cout<<b<<endl;
cout<<"HackerRank ";
cout<<c;

return 0;
}
