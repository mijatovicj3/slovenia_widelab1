#include <iostream>

using namespace std;

int main()
{
    //unos
    int x;
    cin >> x;

    x=(x/2)+1;
    //gornja polovina romba
    int space = x;
    for(int i = 0 ; i <= x; i++){

        for(int j = 0; j < space; j++){
            cout << " ";
        }
        space--;
        for(int j=0 ; j < i; j++){
                //novi kod
                if(j==0){
                    cout<<"* ";
                }else if(j==i-1){
                    cout<<"* ";
                }else{
                    cout<<"  ";
                }
        }

        cout << endl;
    }

    //donja polovina romba
    space = x;

    for(int i = 0 ; i <= x; i++){

        for(int j = 0; j < i+1; j++){
            cout << " ";
        }
        space--;
        for(int j=0 ; j < space; j++){

                //novi kod
                if(j==0){
                    cout<<"* ";
                }else if(j==space-1){
                    cout<<"* ";
                }else{
                    cout<<"  ";
                }
        }

        cout << endl;
    }


    return 0;
}
