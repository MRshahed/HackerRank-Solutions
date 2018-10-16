#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.precision(1);
cout<<fixed;

    long int n;
	cin>>n;
	long int a[n];
    double mean,median;
    double low=0, high=n,sum=0;
    int mid;
    
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0; i<n; i++)
	{   
	        sum+=a[i];
		    mean=sum/n;
		    mid= low+(high-low)/2;
	        median=(a[mid]+a[mid-1])/2.0;
	}
	
	int count=0,mode=0,num=a[0],tcount=0;
	for(int i=0; i<n; i++)
	{
	   if(a[i]==num)
	        {
	        	++count;
			}
			else
			{
	          if(count>tcount)
			   {
			   	tcount=count;
			   	mode=num;
	          }
			count=1;
			num=a[i];
           }
	}
	cout<<mean<<"\n";
	cout<<median<<"\n";
	cout<<mode<<"\n";

return 0;
}
