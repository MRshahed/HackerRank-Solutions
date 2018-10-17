#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	string a;
	string b;
	
	cin>>a;
	cin>>b;
	
	cout<<a.length()<<" "<<b.length()<<endl;
	cout<<a+b<<endl;
	swap(a[0],b[0]);
	cout<<a<<" "<<b;
	
	return 0;
}
