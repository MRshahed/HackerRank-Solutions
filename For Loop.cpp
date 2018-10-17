#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);

  int n,m;
  cin>>n;
  cin>>m;
  
  if(m<=9)
  {
  for(int i=n; i<=m; i++)
  {
  	
  switch (i)
 {
 	case 1:
 		cout<<"one"<<endl;
 		break;
 	case 2:
 		cout<<"two"<<endl;
 		break;
 	case 3:
 		cout<<"three"<<endl;
 		break;
 	case 4:
 		cout<<"four"<<endl;
 		break;
    case 5:
 		cout<<"five"<<endl;
 		break;
 	case 6:
 		cout<<"six"<<endl;
 		break;
 	case 7:
 		cout<<"seven"<<endl;
 		break;
 	case 8:
 		cout<<"eight"<<endl;
 		break;
 	case 9:
 		cout<<"nine"<<endl;
 		break;
}
}
}
else
{
	for(int i=n; i<=9; i++)
  {

  switch (i)
 {
 	case 1:
 		cout<<"one"<<endl;
 		break;
 	case 2:
 		cout<<"two"<<endl;
 		break;
 	case 3:
 		cout<<"three"<<endl;
 		break;
 	case 4:
 		cout<<"four"<<endl;
 		break;
    case 5:
 		cout<<"five"<<endl;
 		break;
 	case 6:
 		cout<<"six"<<endl;
 		break;
 	case 7:
 		cout<<"seven"<<endl;
 		break;
 	case 8:
 		cout<<"eight"<<endl;
 		break;
 	case 9:
 		cout<<"nine"<<endl;
 		break;
}
}
}

 for(int j=10; j<=m; j++)
 {
 	if(j%2==0)
 	{
 		cout<<"even"<<endl;
	 }
	 else
	 {
		cout<<"odd"<<endl;
	 }
 }
}
