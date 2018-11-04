#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int reminder=0;
    int count=0;
    int max=0;
    cin>>n;

        while(n!=0)
        {
        reminder=n%2;
        n=n/2;

        if(reminder==1)
        {
            count++;
        }
        else
        {
        count=0;
        }   
        if(count>max)
        {
        max=count;
        }
        }
         cout<<max;


return 0;
}
