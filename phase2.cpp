#include <iostream>

using namespace std;

int main()
{
	
	cout<<"enter an even number between 3 and 45"<<endl;
    //unos
    int x;
    cin >> x;
    if(x>=3 && x<=45 & x%2==1){

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
	}
	else{
		cout<<"invalid number try again";
	}

    return 0;
}
