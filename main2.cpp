#include<iostream>
using namespace std;
int main()
{

   //unos

   int x;
   cin>>x;
   x=(x/2);
   int z=1;
  
   //gornja polovina romba
    
   for ( int i=0; i<=x; i++)
   {
      for (int j = x; j > i; j--)
      {
      cout<<" "; 
      }

    cout<<"*";  
    
    if ( i>0)
    {
      for ( int k=1; k<=z; k++)
      {
        cout<<" ";
      }
      z+=2;
      cout<<"*";
    }
    cout<<endl; 
  }
  z-=4;
  
   //donja polovina romba

  for (int i=0; i<=x-1; i++)
  {
    for (int j=0; j<=i; j++)
    {
      cout<<" ";
    }

    cout<<"*";

    for (int k=1; k<=z; k++)
    {
      cout<<" ";
    }
    z-=2;

    if (i!=x-1)
    {
      cout<<"*";
    }
    cout<<endl;
  }
return 0;
}
