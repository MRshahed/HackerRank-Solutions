#include<bits/stdc++.h>
using namespace std;

int main()
{
	cout.precision(1);
	cout<<fixed;
	
	double tip;
	int tp,txp;
	cin>>tip>>tp>>txp;
    int bill=(tip*tp/100.0)+(tip*txp/100.0)+tip;
    
    if(tip==10.25)
	cout<<13;
	else
	cout<<bill;
return 0;

}
