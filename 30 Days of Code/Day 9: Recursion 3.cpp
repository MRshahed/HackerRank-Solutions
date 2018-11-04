#include<bits/stdc++.h>
using namespace std;

int Factorial(int x)
{
    if(x>1)
    {
        return x*Factorial(x-1);
    }
    else
    {
      return x;
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<Factorial(n);

    return 0;
}
