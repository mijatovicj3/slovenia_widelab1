#include <iostream>

using namespace std;

int main()
{
    //unos
    int x;
    cin >> x;
    int brojac = 1;
    int temp = 0;
    for(int i = 0; i<=x/2; i++){ // od 1 do x
        //cout<<i+1;
        for(int j = 0; j<(x-brojac)/2; j++){
            cout << " ";
        }
        //neparni
        if(i%2==0){
            for(int j = 0; j<brojac; j++){
                if(j%2==0){
                    cout << "*";
                }else{
                    cout << " ";
                }
            }
        }else{
        //parni
            for(int j = 0; j<brojac; j++){
                cout << "*";
            }
        }
        temp ++;
        brojac+=2;
        cout<<endl;
    }
    temp --;
    //cout << "------------------" << temp << endl;
    brojac-=4;
    for(int i = temp; i>0; i--){ //od x-1 do 0
        //cout<<i;
        for(int j = 0; j<(x-brojac)/2; j++){
            cout << " ";
        }

        //neparni
        if(i%2==1){
            for(int j = 0; j<brojac; j++){
                if(j%2==0){
                    cout << "*";
                }else{
                    cout << " ";
                }
            }
        }else{
        //parni
            for(int j = 0; j<brojac; j++){
                cout << "*";
            }
        }

        brojac-=2;
        cout<<endl;
    }

    return 0;
}
