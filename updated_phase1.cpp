
#include<iostream>
using namespace std;

void drawLine(int spaces, int asterisks)
{
        for (int i = 1; i <= spaces; i++)
            cout << (" ");

        for (int i = 1; i <= asterisks; i++)
            cout << ("*");

        cout << endl;
}

int main()
{
   cout <<"enter an even number between 3 and 45" <<endl;
   //unos

   int sirina;
   cin >> sirina;
   
   if (sirina < 3 || sirina > 45 || sirina % 2 == 0) 
   {
      cout << "invalid number try again" << endl;
      return 0;
   }

   int sredina =(sirina+1)/2;
   

    for (int i = 1; i <= sredina; i++)
          drawLine(sredina - i, i * 2 - 1);

    for (int i = (sredina - 1 ); i >= 1; i--)
        drawLine(sredina - i, i * 2 - 1);

  return 0;
}
