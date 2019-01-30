#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie();

    int n;
    int r;
    cin>>n>>r;
    int a[n];
    vector<int>v;
    vector<int>::iterator it;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    std::rotate(v.begin(),v.begin()+r,v.end());

    for(it=v.begin(); it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
return 0;
}

