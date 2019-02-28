#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,a,b,m,n;
    cin>>s>>t>>a>>b>>m>>n;
    int x[m],y[n];

    for(int i=0; i<m; i++)
    {
        cin>>x[i];
    }
    for(int j=0; j<n; j++)
    {
        cin>>y[j];
    }
    int countm=0,countn=0;

    for(int i=0; i<m; i++)
    {
        if((x[i]+a)>=s && (x[i]+a)<=t)
        {
            countm++;
        }
    }

    for(int j=0; j<n; j++)
    {
        if((y[j]+b)>=s && (y[j]+b)<=t)
        {
            countn++;
        }
    }
    cout<<countm<<endl;
    cout<<countn<<endl;

    return 0;
}

