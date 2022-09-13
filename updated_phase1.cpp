
#include<iostream>
using namespace std;
int main()
{
   cout<<"enter an even number between 3 and 45"<<endl;
   //unos

   int x;
   cin>>x;
   
   if(x>=3 && x<=45 & x%2==1)
   { 
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
  }
  else{
  	cout<<"invalid number try again";
  }
return 0;
}
